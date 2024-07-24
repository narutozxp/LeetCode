/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
#include<vector>
using std::vector;
class Solution {
    vector<vector<int>> res;
    vector<int> track;
public:
    vector<vector<int>> combine(int n, int k) {
        backtrack(n,1,k);
        return res;
    }

    void backtrack(int n,int start, int k){
        if (track.size() == k)
        {   
            res.push_back(track);
        }
        
        for(int i = start;i<=n;i++){
            track.push_back(i);
            backtrack(n,i+1,k);
            track.pop_back();
        }
    }
};
// @lc code=end

