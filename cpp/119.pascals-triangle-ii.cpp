#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> res(rowIndex + 1);
        res[0] = 1;
        for (int i = 1; i <= rowIndex; i++) {
            res[i] = 1ll * res[i - 1] * (rowIndex - i + 1) / i;
        }
        return res;
    }
};
// @leet end
