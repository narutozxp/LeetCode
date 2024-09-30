// @leet start
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern)
    {
        long long numPattern = 0;
        int numFisrt = 0;
        int numSecond = 0;
        int len = text.size();
        char First = pattern[0];
        char Second = pattern[1];
        for (int i = 0; i < len; i++) {
            char cur = text[i];
            if (cur == Second) {
                numSecond++;
                numPattern += numFisrt;
            }
            if (cur == First)
                numFisrt++;
        }

        return max(numFisrt, numSecond) + numPattern;
    }
};
// @leet end
