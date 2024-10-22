#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int fast = 0;
        int slow = 0;
        int len = nums.size();
        int mul = 1;
        int res = 0;
        while (fast < len)  {
            mul *= nums[fast++];
            while (mul >= k && slow < fast) {
                mul /= nums[slow];
                slow++;
            }
            res += fast - slow;
        }

        return res;
    }
};
// @leet end
