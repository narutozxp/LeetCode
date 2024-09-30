#include <algorithm>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k)
    {
        int res = 0;
        int target = tickets[k];
        int len = tickets.size();
        for (int i = 0; i <= k; i++) {
            res += min(target, tickets[i]);
        }
        for (int i = k + 1; i < len; i++) {
            res += min(target - 1, tickets[i]);
        }
        return res;
    }
};
// @leet end
