#include <cstdint>
using namespace std;

// @leet start
class Solution {
public:
    int reverse(int x)
    {
        int flag;
        if (x >= 0) {
            flag = 1;
        } else {
            flag = 0;
        }

        int res = 0;
        while (x != 0) {
            int remainder = x % 10;
            int overflow;
            x = x / 10;
            if (flag) {
                overflow = res > (INT32_MAX - remainder) / 10;
            } else {
                overflow = res < (INT32_MIN - remainder) / 10;
            }
            if (overflow) {
                return 0;
            }

            res = res * 10 + remainder;
        }

        return res;
    }
};
// @leet end
