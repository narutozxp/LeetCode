#include <string>
#include <vector>
using namespace std;

// @leet start
// based on backtrack

// class Solution {
// private:
//     string cur;
//     vector<string> res;
//     int len;
//
// public:
//     vector<string> validStrings(int n)
//     {
//         len = n;
//         trackback();
//         return res;
//     }
//
//     void trackback()
//     {
//         if (cur.length() == len) {
//             res.push_back(cur);
//             return;
//         }
//
//         if (!cur.empty() && cur.back() == '0') {
//             cur += "1";
//             trackback();
//             cur.pop_back();
//
//         } else {
//             cur += "1";
//             trackback();
//             cur.pop_back();
//
//             cur += "0";
//             trackback();
//             cur.pop_back();
//         }
//     }
// };

// based on bit operation, which is faster
class Solution {
public:
    vector<string> validStrings(int n)
    {
        vector<string> res;
        int mask = -1 - ((1 << (n - 1)) - 1);
        for (int i = 0; i < (1 << n); i++) {
            if (((i | i >> 1) | mask) == -1) {
                res.push_back(intToBinaryString(i, n));
            }
        }
        return res;
    }

    string intToBinaryString(int num, int n)
    {
        string binary(n, '0');
        for (int j = 0; j < n; j++) {
            binary[n - 1 - j] = (num & (1 << j)) ? '1' : '0';
        }
        return binary;
    }
};

// @leet end
