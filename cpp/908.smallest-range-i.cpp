#include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k)
    {
        sort(nums.begin(), nums.end());
        int sub = nums.back() - nums.front() - k - k;
        return sub > 0 ? sub : 0;
    }
};
// @leet end
