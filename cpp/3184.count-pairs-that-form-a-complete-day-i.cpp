#include <map>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours)
    {
        map<int, int> nums;
        for (int& hour : hours) {
            hour = hour % 24;
            nums[hour]++;
        }

        int res = nums[0] * (nums[0] - 1) / 2;
        res += nums[12] * (nums[12] - 1) / 2;
        for (int i = 1; i < 12; i++) {
            res += nums[i] * nums[24 - i];
        }

        return res;
    }
};
// @leet end
