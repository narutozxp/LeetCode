#
# @lc app=leetcode.cn id=374 lang=python3
#
# [374] 猜数字大小
#

# @lc code=start
# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        left = 1
        right = n
        while 1 :    
            mid = int((left + right) / 2)

            flag  = guess(mid)
            if flag == 0:
                return mid
            elif(flag == -1):
                left = left
                right = mid-1 
            else:
                left = mid +1
                right = right
        
        
# @lc code=end

