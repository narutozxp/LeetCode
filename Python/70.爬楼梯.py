#
# @lc app=leetcode.cn id=70 lang=python3
#
# [70] 爬楼梯
#

# @lc code=start
class Solution:
    def climbStairs(self, n: int) -> int:
        num0 = 1
        num1 = 1
        for i in range(n-1):
            num1,num0 = num1+num0,num1
        return num1
# from functools import lru_cache
# @lru_cache(maxsize=128,typed=False)
# class Solution:
#     def climbStairs(self, n: int) -> int:
#         def NumsOfMethod(n:int) -> int:
#             if(n==1):
#                 return 1
#             if(n==2):
#                 return 2
#             return NumsOfMethod(n-1)+NumsOfMethod(n-2)
#         return NumsOfMethod(n)
# @lc code=end

