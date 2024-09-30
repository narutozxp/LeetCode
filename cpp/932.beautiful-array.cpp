#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    vector<int> beautifulArray(int n)
    {
        vector<int> res;
        if (n == 1)
            return { 1 };
        if (n == 2)
            return { 1, 2 };

        // left is odd and num = (n+1)/2
        vector<int>&& left = beautifulArray((n + 1) / 2);

        // right is even ann num = n/2
        vector<int>&& right = beautifulArray(n / 2);

        for (int item : left) {
            res.push_back(item * 2 - 1);
        }

        for (int item : right) {
            res.push_back(item * 2);
        }

        return res;
    }
};
// @leet end
