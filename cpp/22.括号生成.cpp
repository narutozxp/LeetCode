/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;
class Solution {

    vector<string> res;
    int len;

public:
    vector<string> generateParenthesis(int n)
    {
        string s;
        len = n * 2;
        backtracing(s, 0, n);
        return res;
    }
    void backtracing(string& str, int n, int left)
    {
        if (str.length() == len) {
            res.push_back(str);
            return;
        }

        if (left > 0) {
            str += '(';
            backtracing(str, n + 1, left - 1);
            str.pop_back();
        }

        if (n > 0) {
            str += ')';
            backtracing(str, n - 1, left);
            str.pop_back();
        }
    }
};
// @lc code=end
