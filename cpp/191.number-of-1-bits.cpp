#include <cstdint>
#include <string>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int hammingWeight(int n)
    {
        int res = 0;
        while (n > 0) {
            res += n & 1;
            n = n >> 1;
        }
        return res;
    }
};
// @leet end
