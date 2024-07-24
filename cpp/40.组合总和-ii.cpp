/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
#include <vector>
#include <algorithm>
using std::vector;
using std::sort;
class Solution {
    vector<int> track;
    int sum;
    vector<vector<int>> res;

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        sort(candidates.begin(),candidates.end());
        sum = 0;
        backtrack(candidates, target, 0);
        return res;
    }

    void backtrack(vector<int>& candidates, int target, int start)
    {
        // base case
        if (sum == target) {
            res.push_back(track);
            return;
        }
        // 减枝
        if (sum > target) {
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            // 防止重复组合
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }

            track.push_back(candidates[i]);
            sum += candidates[i];
            backtrack(candidates, target, i + 1);
            track.pop_back();
            sum -= candidates[i];
        }
    }
};
// @lc code=end
