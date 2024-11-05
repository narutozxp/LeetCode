#include <map>
#include <string>
using namespace std;

// @leet start
class Solution {
public:
    // 1 <= num <= 3999
    string intToRoman(int num)
    {
        map<int, const char*, greater<int>> dict {
            { 1000, "M" },
            { 900, "CM" },
            { 500, "D" },
            { 400, "CD" },
            { 100, "C" },
            { 90, "XC" },
            { 50, "L" },
            { 40, "XL" },
            { 10, "X" },
            { 9, "IX" },
            { 5, "V" },
            { 4, "IV" },
            { 1, "I" },
        };

        string res;

        // method 1
        // while (num != 0) {
        //     for (auto [digit, roman] : dict) {
        //         if(num>=digit){
        //             res += roman;
        //             num -= digit;
        //             break;
        //         }
        //     }
        // }

        // method 2;  faster
        for (auto [digit, roman] : dict) {
            while (num >= digit) {
                res += roman;
                num -= digit;
            }
            if (num == 0) {
                break;
            }
        }

        return res;
    }
};
// @leet end
