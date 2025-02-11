#include <cmath>
using namespace std;

// @leet start
class Solution {
public:
    bool isPowerOfFour(int n)
    {
        if (n <= 0) {
            return false;
        }
        if ((n & (n - 1)) != 0) {
            return false;
        }
        int sq = sqrt(n);
        if (n != sq * sq) {
            return false;
        }
        return true;
    }
};
// @leet end
