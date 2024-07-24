/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
#include <vector>
using std::vector;
// 分解子问题解法
// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums)
//     {
//         if (nums.size() == 0) {
//             vector<vector<int>> empty(1, vector<int>());
//             return empty;
//         }
//         int item = nums.back();
//         nums.pop_back();
//         auto res = subsets(nums);
//         int size = res.size();
//         for (int i = 0; i < size; i++) {
//             vector<int> tmp = res[i];
//             tmp.push_back(item);
//             res.push_back(tmp);
//         }
//         return res;
//     }
// };

// 回溯解法，盒视角
// class Solution {
// private:
//     vector<vector<int>> res;
//     // 记录回溯算法的递归路径
//     vector<int> track;

// public:
//     // 主函数
//     vector<vector<int>> subsets(vector<int>& nums)
//     {
//         backtrack(nums, 0);
//         return res;
//     }

//     // 回溯算法核心函数，遍历子集问题的回溯树
//     void backtrack(vector<int>& nums, int start)
//     {

//         // 前序位置，每个节点的值都是一个子集
//         res.push_back(track);

//         // 回溯算法标准框架
//         for (int i = start; i < nums.size(); i++) {
//             // 做选择
//             track.push_back(nums[i]);
//             // 通过 start 参数控制树枝的遍历，避免产生重复的子集
//             backtrack(nums, i + 1);
//             // 撤销选择
//             track.pop_back();
//         }
//     }
// };

// 回溯解法，球视角
class Solution {
private:
    vector<vector<int>> res;
    // 记录回溯算法的递归路径
    vector<int> track;

public:
    // 主函数
    vector<vector<int>> subsets(vector<int>& nums)
    {
        backtrack(nums, 0);
        return res;
    }

    // 回溯算法核心函数，遍历子集问题的回溯树
    void backtrack(vector<int>& nums, int index)
    {
        if (index == nums.size()) {
            res.push_back(track);
            return;
        }

        // 选择当前节点
        track.push_back(nums[index]);
        backtrack(nums, index + 1);
        // 撤销选择
        track.pop_back();

        // 不选择当前节点
        backtrack(nums, index + 1);
    }
};

// @lc code=end
