#include <string>
using namespace std;

// @leet start
class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int len_s = s.size();
        int len_t = t.size();
        int index_s = 0;
        int index_t = 0;

        for (; index_s < len_s;) {
            while (index_t < len_t && s[index_s] != t[index_t]) {
                index_t++;
            }
            index_s++;
            index_t++;
        }

        return index_t <= len_t;
    }
};
// @leet end
