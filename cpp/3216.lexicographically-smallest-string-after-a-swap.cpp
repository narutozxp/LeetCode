#include <string>
using namespace std;

// @leet start
class Solution {
public:
    string getSmallestString(string s)
    {
        int len = s.size();
        for (int i = 0; i < len - 1; i++) {
            if (s[i] % 2 == s[i + 1] % 2 && s[i] > s[i + 1]) {
                char tmp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = tmp;
                return s;
            }
        }

        return s;
    }
};
// @leet end
