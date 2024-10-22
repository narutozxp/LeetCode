#include <vector>
using namespace std;

// @leet start
// class Solution {
// public:
//     int minOperations(vector<int>& nums)
//     {
//         return dp(nums, 0);
//     }
//
//     int dp(vector<int>& nums, int begin)
//     {
//         if (begin > nums.size() - 3) {
//             if (nums[begin] == 1 && nums[begin+1] == 1)
//                 return 0;
//             return -1;
//         }
//
//         nums[begin + 1] ^= 1 - nums[begin];
//         nums[begin + 2] ^= 1 - nums[begin];
//
//         int sub = dp(nums, begin + 1);
//
//         return sub == -1 ? -1 : sub + 1 - nums[begin];
//     }
// };

class Solution {
public:
    int minOperations(vector<int>& nums)
    {
        int res = 0;
        int i = 0;
        for (; i < nums.size() - 2; i++) {
            if (nums[i] == 0) {
                res++;
                nums[i + 1] ^= 1;
                nums[i + 2] ^= 1;
            }
        }

        if (nums[i] == 1 && nums[i + 1] == 1) {
            return res;
        } else {
            return -1;
        }
    }
};
// @leet end
