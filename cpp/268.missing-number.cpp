#include <vector>
using namespace std;

// @leet start
// class Solution {
// public:
//     int missingNumber(vector<int>& nums)
//     {
//         int len = nums.size();
//         int sum_nums = 0;
//         int sum_need = 0;
//         for (int num : nums) {
//             sum_nums += num;
//         }
//         for (int i = 0; i <= len; i++) {
//             sum_need += i;
//         }
//         return sum_need - sum_nums;
//     }
// };

// method 2
class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int res = 0;
        for (int num : nums) {
            res ^= num;
        }
        for (int i = 0; i <= nums.size(); i++) {
            res ^= i;
        }
        return res;
    }
};
// @leet end
