#
# @lc app=leetcode.cn id=66 lang=python3
#
# [66] 加一
#

# @lc code=start
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        cin = 1
        for index in range(len(digits)-1,-1,-1):
            sum = digits[index]+cin
            digits[index] = sum%10
            cin = sum//10
        return digits if cin==0 else [1]+digits
# @lc code=end

