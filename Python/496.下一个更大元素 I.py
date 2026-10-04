#
# @lc app=leetcode.cn id=496 lang=python3
# @lcpr version=
#
# [496] 下一个更大元素 I
#

# @lc code=start
class Solution:
    def nextGreaterElement(self, nums1: list[int], nums2: list[int]) -> list[int]:

        len_s2 = len(nums2)
        max_val = nums2[-1]
        greater_map = {}
        for i in range(len_s2-1, -1, -1):
            if nums2[i] >= max_val:
                greater_map[nums2[i]] = -1
                max_val = nums2[i]
            else:
                for j in range(i+1, len_s2):
                    if nums2[j] > nums2[i]:
                        greater_map[nums2[i]] = nums2[j]
                        break
        return [greater_map[num] for num in nums1]
            
        
# @lc code=end



#
# @lcpr case=start
# [4,1,2]\n[1,3,4,2]\n
# @lcpr case=end

# @lcpr case=start
# [2,4]\n[1,2,3,4]\n
# @lcpr case=end

#

