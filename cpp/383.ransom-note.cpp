#include <string>
using namespace std;

// @leet start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int dict[26];
        for (int i = 0; i < 26; i++) {
            dict[i] = 0;
        }

        for (auto c : ransomNote) {
            dict[c - 'a'] -= 1;
        }

        for (auto c : magazine) {
            dict[c - 'a'] += 1;
        }

        for (int i = 0; i < 26; i++) {
            if (dict[i] < 0) {
                return false;
            }
        }

        return true;
    }
};
// @leet end
