#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    // 手写split函数，将s按空格分隔，并存到vector中
    vector<string> split(string s)
    {
        int n = s.size();
        string cur = "";
        vector<string> res;
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                cur += s[i];
            } else {
                res.push_back(cur);
                cur = "";
            }
        }
        if (cur != "")
            res.push_back(cur);
        return res;
    }
    bool wordPattern(string pattern, string s)
    {
        vector<string> strs = split(s);
        // 映射关系的哈希表
        unordered_map<char, string> ctos;
        unordered_map<string, char> stoc;
        if (pattern.size() != strs.size())
            return false;
        for (int i = 0; i < pattern.size(); i++) {
            if (ctos.count(pattern[i]) && ctos[pattern[i]] != strs[i] || stoc.count(strs[i]) && stoc[strs[i]] != pattern[i])
                return false;
            ctos[pattern[i]] = strs[i];
            stoc[strs[i]] = pattern[i];
        }
        return true;
    }
};
// @leet end
