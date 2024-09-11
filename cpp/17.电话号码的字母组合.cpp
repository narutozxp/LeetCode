/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
#include <map>
#include <string>
#include <vector>
using namespace std;
class Solution {
    vector<string> res;
    map<char, string> dict {
        { '2', "abc" },
        { '3', "def" },
        { '4', "ghi" },
        { '5', "jkl" },
        { '6', "mno" },
        { '7', "pqrs" },
        { '8', "tuv" },
        { '9', "wzyx" }
    };
    string inDigits;
    int len;

public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.empty()) {
            return res;
        }
        inDigits = digits;
        len = digits.length();
        string cur;
        backTracing(cur, 0);
        return res;
    }

    void backTracing(string& cur, int i)
    {
        if (i == len) {
            res.push_back(cur);
            return;
        }

        for (char key : dict[inDigits[i]]) {
            cur += key;
            backTracing(cur, i + 1);
            cur.pop_back();
        }
    }
};
// @lc code=end
