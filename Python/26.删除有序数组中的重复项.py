#
# @lc app=leetcode.cn id=26 lang=python3
#
# [26] 删除有序数组中的重复项
#

# @lc code=start
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 1
        for _ in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                nums[i:] = nums[i+1:]
                i = i-1
            i = i+1
        return len(nums)
# @lc code=end

