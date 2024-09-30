#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    vector<int> cycleLengthQueries(int n, vector<vector<int>>& queries)
    {
        vector<int> res;
        for (auto item : queries) {
            res.push_back(getLength(item[0], item[1]) + 1);
        }
        return res;
    }

    inline int getLength(int a, int b)
    {
        int ans = 0;
        while (a != b) {
            if (a < b)
                b = b / 2;
            else
                a = a / 2;
            ans++;
        }
        return ans;
    }
};
// @leet end
