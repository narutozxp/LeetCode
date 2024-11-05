#include <cmath>
#include <cstdint>
using namespace std;

// @leet start
class Solution {
public:
    bool judgeSquareSum(int c)
    {
        int left = 0;
        int right = sqrt(c);
        while (left <= right) {
            int64_t res = (int64_t)left * left + right * right;
            if (res > c) {
                right--;
            } else if (res < c) {
                left++;
            } else {
                return true;
            }
        }

        return false;
    }
};
// @leet end
