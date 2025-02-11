#include <string>
using namespace std;

// @leet start
class Solution {
public:
    int firstUniqChar(string s)
    {
        int dict[26] = {};

        for (char c : s) {
            dict[c - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (dict[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
// @leet end
