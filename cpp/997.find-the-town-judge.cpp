// @leet start
#include <vector>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust)
    {
        vector<pair<int, int>> trustCount(n + 1);

        for (auto& item : trust) {
            trustCount[item[0]].second++;
            trustCount[item[1]].first++;
        }

        for (int i = 1; i <= n; i++) {
            if (trustCount[i].first == n - 1 && trustCount[i].second == 0) {
                return i;
            }
        }

        return -1;
    }
};
// @leet end
