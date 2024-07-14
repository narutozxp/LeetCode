/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (!isChar(s[left])) {
                left++;
                continue;
            }
            if (!isChar(s[right])) {
                right--;
                continue;
            }
            if (!isEqual(s[right], s[left])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    // 是否是字母和数字
    bool isChar(char s)
    {
        if ((65 <= s && s <= 90) || (97 <= s && s <= 122) || (48 <= s && s <= 57))
            return true;
        else
            return false;
    }

    // 是否相等
    bool isEqual(char a, char b)
    {
        if (a == b) {
            return true;
        } else if (a < b) {
            
            return ((97 <= b && b <= 122) && b == a + 32);
        }
        return ((97 <= a && a <= 122) && a == b + 32);
    }
};
// @lc code=end
