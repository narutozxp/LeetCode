#
# @lc app=leetcode.cn id=20 lang=python3
#
# [20] 有效的括号
#

# @lc code=start
class Solution:
    def isValid(self, s: str) -> bool:
        _left = ["(","{","["]
        map_relationship = {
            ")" : "(",
            "}" : "{",
            "]" : "["
        }
        # _right = [")","}","]"]
        left_str = ""
        for element in s:
            if element in _left:
                left_str += element
            else:
                if left_str and left_str[-1] == map_relationship[element]:
                    left_str = left_str[0:-1]
                else:
                    return False
            # print(left_str)
        return left_str==""
# @lc code=end

