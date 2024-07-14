/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int index = removeElement(nums, 0);
        while (index < nums.size()) {
            nums[index] = 0;
            index++;
        }
    }

    int removeElement(vector<int>& nums, int val)
    {
        int fast = 0, slow = 0;
        while (fast < nums.size()) {
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};
// @lc code=end
