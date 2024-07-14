/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s)
    {
        string res = "";
        int index = 0;
        while (index < s.length()) {
            string s1 = palindrome(s, index, index);
            string s2 = palindrome(s, index, index + 1);

            res = res.length() >= s1.length() ? res : s1;
            res = res.length() >= s2.length() ? res : s2;
            index++;
        }
        return res;
    }

    // 找出以s[l]与s[r]为中心的最长回文串
    string palindrome(const string s, int l, int r)
    {
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            l--;
            r++;
        }
        return s.substr(l + 1, r - l - 1);
    }
};
// @lc code=end
