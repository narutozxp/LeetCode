/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums)
//     {
//         vector<vector<int>> res;
//         vector<bool> used(nums.size(), false);
//         vector<int> current;
//         backtrace(res, nums, current, used);
//         return res;
//     }

//     void backtrace(vector<vector<int>>& res, vector<int>& nums, vector<int>& current, vector<bool>& used)
//     {
//         if (current.size() == used.size()) {
//             res.push_back(current);
//             return;
//         }
//         for (int i = 0; i < nums.size(); i++) {
//             if (!used[i]) {
//                 used[i] = true;
//                 current.push_back(nums[i]);
//                 backtrace(res, nums, current, used);
//                 current.pop_back();
//                 used[i] = false;
//             }
//         }
//     }
// };

// without used
#include <vector>
using std::vector;
class Solution {
    vector<int> trace;
    vector<vector<int>> res;

public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        backtrace(nums, 0);
        return res;
    }

    void backtrace(vector<int>& nums, int i)
    {
        if (trace.size() == nums.size()) {
            res.push_back(trace);
            return;
        }
        for (int j = i; j < nums.size(); j++) {
            trace.push_back(nums[j]);
            swap(nums, i, j);
            backtrace(nums, i + 1);
            swap(nums, i, j);
            trace.pop_back();
        }
    }
    void swap(vector<int>& nums, int i, int j)
    {
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
};

// @lc code=end
