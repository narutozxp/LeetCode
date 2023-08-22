#
# @lc app=leetcode.cn id=9 lang=python3
#
# [9] 回文数
#

# @lc code=start
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if(x < 0 or (x % 10 ==0 and x != 0)):
            return False
        reversed_number = 0
        while(x > reversed_number):
            reversed_number = reversed_number * 10 + x % 10
            x = x // 10
        return (x == reversed_number or x == reversed_number // 10)

        
# @lc code=end

