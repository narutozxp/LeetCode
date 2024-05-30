#
# @lc app=leetcode.cn id=1061 lang=python3
#
# [1061] 按字典序排列最小的等效字符串
#

# @lc code=start
import collections
class Solution:

    def smallestEquivalentString(self, s1: str, s2: str, baseStr: str) -> str:

        def dfs(ele, res_char, visit, data_dict):
            res_char = min(res_char, ele)
            if ele not in visit:
                visit.add(ele)
                for one in data_dict[ele]:
                    res_char = min(res_char, dfs(one, res_char, visit, data_dict))  # dfs
            return res_char
        
        # generate initial dict from str
        hashtable = collections.defaultdict(set)
        for index in range(len(s1)):
            hashtable[s1[index]].add(s2[index])
            hashtable[s2[index]].add(s1[index])
        
        res = ""
        for ele in baseStr:
             visit = set()
             res += dfs(ele,ele,visit,hashtable)
        return res

# @lc code=end

