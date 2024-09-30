// @leet start
#include <vector>
using namespace std;

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values)
    {
        int curMax = 0;
        int ans = 0;
        int tmp;
        int len = values.size();
        for (int i = 1; i < len; i++) {
            tmp = values[i - 1] + i - 1;
            curMax = curMax > tmp ? curMax : tmp;
            tmp = curMax + values[i] - i;
            ans = ans > tmp ? ans : tmp;
        }
        return ans;
    }
};
// @leet end
