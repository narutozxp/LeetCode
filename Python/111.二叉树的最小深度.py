#
# @lc app=leetcode.cn id=111 lang=python3
#
# [111] 二叉树的最小深度
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        NodeList = [root]
        depth = 1
        while NodeList:
            for _ in NodeList[:]:
                node = NodeList.pop(0)
                if (not node.left) and (not node.right):
                    return depth
                else:
                    if node.left:
                        NodeList.append(node.left)
                    if node.right:
                        NodeList.append(node.right)
            depth = depth + 1  

# @lc code=end

