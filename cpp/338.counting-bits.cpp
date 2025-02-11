#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    vector<int> countBits(int n)
    {
        vector<int> res(n + 1);
        for (int i = 0; i <= n; i++) {
            res[i] = countOnes(i);
        }
        return res;
    }

    int countOnes(int x)
    {
        int nums = 0;
        while (x > 0) {
            x = x & (x - 1);
            nums++;
        }
        return nums;
    }
};
// @leet end
