#include <climits>
#include <cstdint>
#include <vector>
using namespace std;

// @leet start
// timeout in some last testbenchs
// class Solution {
// public:
//     int maximumSumSubsequence(vector<int>& nums, vector<vector<int>>& queries)
//     {
//         int mod = 1000000007;
//         int res = 0;
//         int len = nums.size();
//         int* dict = new int[len];
//
//         for (auto& item : queries) {
//             for (int i = 0; i < len; i++) {
//                 dict[i] = INT_MIN;
//             }
//             nums[item[0]] = item[1];
//             res = ((int64_t)res + maxSumSub(nums, 0, dict)) % mod;
//         }
//
//         return res;
//     }
//
//     int maxSumSub(vector<int>& nums, int begin, int* dict)
//     {
//         if (begin >= nums.size()) {
//             return 0;
//         }
//         if (dict[begin] != INT_MIN) {
//             return dict[begin];
//         }
//         int64_t res = INT64_MIN;
//         if (nums[begin] > 0) {
//             res = max(res, (int64_t)maxSumSub(nums, begin + 2, dict) + nums[begin]);
//         }
//         res = max(res, (int64_t)maxSumSub(nums, begin + 1, dict));
//
//         dict[begin] = res % (1000000007);
//         return dict[begin];
//     }
// };

// @leet end
