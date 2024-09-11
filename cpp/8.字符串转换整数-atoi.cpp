/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
#include <stdint.h>
#include <string>
using namespace std;
class Solution {
public:
    int myAtoi(string s)
    {
        int64_t res = 0;
        bool flag = 1;
        int len = s.length();
        int index = 0;

        // 移除前导空格
        while (s[index] == ' ') {
            index++;
        }

        if (s[index] == '-') {
            flag = 0;
            index++;
        } else if (s[index] == '+') {
            index++;
        }

        while (index < len && s[index] <= '9' && s[index] >= '0') {
            res = res * 10 + s[index] - '0';
            index++;
            if (isOverflow(res, flag)) {
                res = flag ? INT32_MAX : INT32_MIN;
                return res;
            }
        }

        return flag ? res : -res;
    }

    // 判断num作为int32来看，是否溢出，flag=1 表示其为正数
    bool isOverflow(int64_t num, bool flag)
    {
        if (flag)
            return num > INT32_MAX;
        else
            return num > 1u + INT32_MAX;
    }
};
// @lc code=end
