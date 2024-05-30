#
# @lc app=leetcode.cn id=35 lang=python3
#
# [35] 搜索插入位置
#
import  math
# @lc code=start
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums)-1
        mid = 0
        while left<=right:
            mid = (left+right)//2
            if target == nums[mid]:
                return mid
            if target > nums[mid]:
                left = mid+1
            if target < nums[mid]:
                right = mid-1
        return mid if target<nums[mid] else mid+1
# @lc code=end

