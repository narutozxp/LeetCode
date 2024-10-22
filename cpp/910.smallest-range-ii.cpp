#include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k)
    {
        sort(nums.begin(), nums.end());
        int res = nums.back() - nums.front();

        for (int i = 1; i < nums.size(); i++) {
            res = min(res, max(nums.back() - k, nums[i - 1] + k) - min(nums.front() + k, nums[i] - k));
        }

        return res;
    }
};
// @leet end
