/*
 * @lc app=leetcode.cn id=93 lang=cpp
 *
 * [93] 复原 IP 地址
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;
class Solution {
    vector<string> sub_list;
    vector<string> res;

public:
    vector<string> restoreIpAddresses(string s)
    {
        inserDot(s, 0);
        return res;
    }

    void inserDot(string& s, int index)
    {
        if (sub_list.size() == 3) {
            string sub_str = s.substr(index);
            if (sub_str.length() <= 3 && isValid(sub_str)) {
                res.push_back(sub_list[0] + '.' + sub_list[1] + '.' + sub_list[2] + '.' + sub_str);
                return;
            }
            return;
        }

        // 最多相较于当前index往后移动三位
        for (int i = 1; i <= 3; i++) {
            int pos = index + i;
            if (pos < s.length()) {
                string sub = s.substr(index, i);
                if (isValid(sub)) {
                    sub_list.push_back(sub);
                    inserDot(s, pos);
                    sub_list.pop_back();
                }
            }
        }
    }

    bool isValid(const string& s)
    {
        if (s.length() == 1)
            return true;
        if (s[0] == '0')
            return false;
        if (std::stoi(s) <= 255)
            return true;

        return false;
    }
};
// @lc code=end
