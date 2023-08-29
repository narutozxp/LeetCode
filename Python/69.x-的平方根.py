#
# @lc app=leetcode.cn id=69 lang=python3
#
# [69] x 的平方根 
#

# @lc code=start
from math import floor
class Solution:
    def mySqrt(self, x: int) -> int:
        x_next = x
        x_current = x
        while 1 : 
            if(x_current**2 <= x and (x_current+1)**2 >x):
                break
            x_current = x_next

            print(x_current)
            x_next = floor((x_current + x/x_current)/2)
        return x_current
# @lc code=end

