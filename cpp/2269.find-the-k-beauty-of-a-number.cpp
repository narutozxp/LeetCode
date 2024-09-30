// @leet start
#include <cmath>
class Solution {
public:
    int divisorSubstrings(int num, int k)
    {
        int numSub = 0;
        int numBak = num;
        int res = 0;
        for (int i = 0; i < k; i++) {
            numSub += num % 10 * (int)pow(10, i);
            num /= 10;
        }

        if (numSub != 0 && numBak % numSub == 0) {
            res++;
        }

        while (num != 0) {
            numSub = numSub / 10 + num % 10 * (int)pow(10,k-1);
            num /= 10;

            if (numSub != 0 && numBak % numSub == 0) {
                res++;
            }
        }
        return res;
    }
};
// @leet end
