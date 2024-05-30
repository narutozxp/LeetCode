#
# @lc app=leetcode.cn id=67 lang=python3
#
# [67] 二进制求和
#

# @lc code=start
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        def StrFullAdder(a:str,b:str,cin:str):
            sum = int(a)+int(b)+int(cin)
            out = str(sum % 2)
            cout = str(sum // 2)
            return(cout,out)
        len_a = len(a)-1
        len_b = len(b)-1
        length = max(len_a,len_b)
        ans = ""
        cin = "0"
        for i in range(length+1):
            index_a = len_a-i
            if(index_a < 0):
                numa = "0"
            else:
                numa = a[index_a]
            index_b = len_b-i
            if(index_b < 0):
                numb = "0"
            else:
                numb = b[index_b]
            (cin,sum)=StrFullAdder(numa,numb,cin)
            ans = sum+ans
        return ans if cin=="0" else "1"+ans

# @lc code=end

