#
# @lc app=leetcode.cn id=13 lang=python3
#
# [13] 罗马数字转整数
#

# @lc code=start
class Solution:
    def romanToInt(self, s: str) -> int:
        hashtable = {
            "Z" : 0,
            "I" : 1,
            "V" : 5,
            "X" : 10,
            "L" : 50,
            "C" : 100,
            "D" : 500,
            "M" : 1000
        }
        sum = 0
        length = len(s)
        for i,element in enumerate(s):
            current = hashtable[element]
            if(i+1 < length):
                index = i + 1
            else:
                index = i
            next = hashtable[s[index]]
            if(current < next):
                sum = sum - current
            else:
                sum = sum + current
        return sum
# @lc code=end

