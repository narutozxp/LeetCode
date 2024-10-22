#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int fast = 0;
        int slow = 0;
        int len = nums.size();
        int sum = 0;
        int res = INT_MAX;
        while (fast < len) {
            sum += nums[fast];
            fast++;

            while (sum >= target) {
                sum -= nums[slow];
                res = min(fast - slow, res);
                slow++;
            }
        }

        return res == INT_MAX ? 0 : res;
    }
};
// @leet end
