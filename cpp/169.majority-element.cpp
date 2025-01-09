#include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n / 2];
    }
};
// @leet end
