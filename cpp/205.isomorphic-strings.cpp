#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// @leet start
class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> dict;
        unordered_set<char> history;
        for (int i = 0; i < s.size(); i++) {
            if (dict[s[i]]) {
                if (dict[s[i]] != t[i]) {
                    return false;
                }
            } else {
                if (history.find(t[i]) == history.end()) {
                    dict[s[i]] = t[i];
                    history.insert(t[i]);
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
// @leet end
