/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start

#include<vector>
using std::vector;
class Solution {
    vector<int> track;
    vector<vector<int>> res;
    int sum;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sum = 0;
        backtrack(candidates,0,target);
        return res;
        
    }

    void backtrack(vector<int>& candidates, int start,int target){
        // base case
        if(sum==target){
            res.push_back(track);
            return;
        }
        if(sum>target){
            return;
        }

        for(int i = start; i<candidates.size();i++){
            // select item
            track.push_back(candidates[i]);
            sum += candidates[i];
            backtrack(candidates,i,target);
            sum -= candidates[i];
            track.pop_back();
        }
    }
};
// @lc code=end

