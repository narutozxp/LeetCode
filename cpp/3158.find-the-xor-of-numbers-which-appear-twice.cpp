#include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());

        int res = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end() - 1; it++) {
            if (*it == *(it + 1)) {
                res ^= *it;
            }
        }

        return res;
    }
};
// @leet end
