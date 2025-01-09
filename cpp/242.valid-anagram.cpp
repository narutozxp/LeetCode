#include <string>
#include <unordered_map>
using namespace std;

// @leet start
class Solution {
public:
    bool isAnagram(string s, string t)
    {
        // too slow
        //  sort(s.begin(),s.end());
        //  sort(t.begin(),t.end());
        //  return s==t;

        unordered_map<char, int> char_num;
        for (char c : s) {
            char_num[c]++;
        }
        for (char c : t) {
            char_num[c]--;
        }

        for (auto& [key, val] : char_num) {
            if (val != 0) {
                return false;
            }
        }
        return true;
    }
};
// @leet end
