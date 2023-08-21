#
# @lc app=leetcode.cn id=49 lang=python3
#
# [49] 字母异位词分组
#

# @lc code=start
import collections
class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        ans = collections.defaultdict(list)
        for item in strs:
            key = "".join(sorted(item))
            ans[key].append(item)
            # print(ans.values)
        return list(ans.values())


# @lc code=end

