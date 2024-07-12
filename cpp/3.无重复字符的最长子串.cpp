/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
#include <unordered_map>
#include <string>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> window;
        int left = 0;
        int right = 0;
        int res = 0;

        int len = s.length();

        // 扩大窗口
        for (; right < len; right++)
        {
            char c = s[right];
            window[c]++;

            // 缩小窗口
            while (window[c] > 1)
            {
                char d = s[left];
                window[d]--;
                left++;
            }
            res = max(res, right - left + 1);
        }

        return res;
    }
};
// @lc code=end
