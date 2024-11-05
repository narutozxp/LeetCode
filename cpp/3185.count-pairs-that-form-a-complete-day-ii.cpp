#include <climits>
#include <map>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours)
    {
        map<int, int> nums;
        for (int& hour : hours) {
            hour = hour % 24;
            nums[hour]++;
        }
        long long res = (long long)nums[0] * (nums[0] - 1) / 2;
        res += (long long)nums[12] * (nums[12] - 1) / 2;
        for (int i = 1; i < 12; i++) {
            res += (long long)nums[i] * nums[24 - i];
        }

        return res;
    }
};
// @leet end
