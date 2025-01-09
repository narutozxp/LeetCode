#include <climits>
#include <string>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        nums.push_back(INT_MIN);
        int begin = nums[0];
        int prev = nums[0];
        vector<string> res;
        for (int i = 1; i < nums.size(); i++) {
            int cur = nums[i];
            if ((long)cur - prev != 1) {
                if (prev == begin) {
                    res.push_back(to_string(begin));
                } else {
                    res.push_back(to_string(begin) + "->" + to_string(prev));
                }
                begin = cur;
            }
            prev = cur;
        }
        nums.pop_back();

        return res;
    }
};
// @leet end
