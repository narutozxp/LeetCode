#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    double minimumAverage(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int right = nums.size() - 1;
        int left = 0;
        double res = ((double)nums[right--] + nums[left++]) / 2;

        while (left < right) {
            res = min(res, ((double)nums[right--] + nums[left++]) / 2);
        }

        return res;
    }
};
// @leet end
