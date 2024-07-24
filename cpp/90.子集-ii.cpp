/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start

// 球视角
// #include <algorithm>
// #include <vector>
// using std::sort;
// using std::vector;
// class Solution {
//     vector<int> track;
//     vector<vector<int>> res;

// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums)
//     {
//         sort(nums.begin(),nums.end());
//         backtrack(nums,0);
//         return res;
//     }

//     void backtrack(vector<int>& nums, int index)
//     {
//         if (index == nums.size()) {
//             res.push_back(track);
//             return;
//         }

//         track.push_back(nums[index]);
//         backtrack(nums, index + 1);
//         track.pop_back();
//         if (track.size()==0 || nums[index] != track.back())
//             backtrack(nums, index + 1);
//     }
// };

// 盒视角
#include <algorithm>
#include <vector>
using std::sort;
using std::vector;

class Solution {
    vector<int> track;
    vector<vector<int>> res;

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        backtrack(nums, 0);
        return res;
    }

    void backtrack(vector<int>& nums, int start)
    {

        res.push_back(track);

        for (int i = start; i < nums.size(); i++) {

            // 减枝
            if (i > start && nums[i] == nums[i - 1]) {
                continue;
            }

            // select ith item
            track.push_back(nums[i]);
            backtrack(nums, i + 1);

            // revert
            track.pop_back();
        }
    }
};

// @lc code=end