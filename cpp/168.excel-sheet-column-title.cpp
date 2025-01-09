#include <string>
#include <algorithm>
using namespace std;

// @leet start
// class Solution {
// public:
//     string convertToTitle(int columnNumber)
//     {
//         columnNumber = columnNumber;
//         string res;
//         int s;
//         while (columnNumber > 26) {
//             s = columnNumber % 26;
//             columnNumber = columnNumber / 26;
//
//             if (s == 0) {
//                 s = 26;
//                 columnNumber--;
//             }
//             res.insert(res.begin(), numToChar(s));
//         }
//         res.insert(res.begin(), numToChar(columnNumber));
//
//         return res;
//     }
//
//     char numToChar(const int num)
//     {
//         return 'A' + num - 1;
//     }
// };

class Solution {
public:
    string convertToTitle(int columnNumber)
    {
        string ans;
        while (columnNumber > 0) {
            int a0 = (columnNumber - 1) % 26 + 1;
            ans += a0 - 1 + 'A';
            columnNumber = (columnNumber - a0) / 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// @leet end
