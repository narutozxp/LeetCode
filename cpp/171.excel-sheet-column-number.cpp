#include <string>
using namespace std;

// @leet start
class Solution {
public:
    int titleToNumber(string columnTitle)
    {
        unsigned int val = 0;
        for (char c : columnTitle) {
            val = val * 26 + c - 'A' + 1;
        }
        return val;
    }
};
// @leet end
