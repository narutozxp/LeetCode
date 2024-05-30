#
# @lc app=leetcode.cn id=542 lang=python3
#
# [542] 01 矩阵
#

# @lc code=start
from collections import deque

class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        m, n = len(mat), len(mat[0])
        # 记录答案的结果数组
        res = [[-1] * n for _ in range(m)]

        q = deque()
        # 初始化队列，把那些值为 0 的坐标放到队列里
        for i in range(m):
            for j in range(n):
                if mat[i][j] == 0:
                    q.append((i, j))
                    res[i][j] = 0

        # 执行 BFS 算法框架，从值为 0 的坐标开始向四周扩散
        dirs = [[0, 1], [0, -1], [1, 0], [-1, 0]]
        while q:
            x, y = q.popleft()
            # 向四周扩散
            for dx, dy in dirs:
                nextX, nextY = x + dx, y + dy
                # 确保相邻的这个坐标没有越界且之前未被计算过
                if 0 <= nextX < m and 0 <= nextY < n and res[nextX][nextY] == -1:
                    q.append((nextX, nextY))
                    # 从 mat[x][y] 走到 mat[nextX][nextY] 需要一步
                    res[nextX][nextY] = res[x][y] + 1

        return res





# @lc code=end

