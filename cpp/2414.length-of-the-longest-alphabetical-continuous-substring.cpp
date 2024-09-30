// @leet start
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    int longestContinuousSubstring(string s)
    {
        int left = 0;
        int right = 1;
        int res = 0;
        int strLen = s.length();

        // null string
        if (strLen == 0) {
            return 0;
        }

        while (right < strLen) {
            if (1 != s[right] - s[right - 1]) {
                res = max(res, right - left);
                left = right;
            }
            right++;
        }

        res = max(res, right - left);

        return res;
    }
};
//@leet end
