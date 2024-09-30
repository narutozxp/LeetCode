#include <cmath>
#include <string>
#include <unordered_map>
using namespace std;

// @leet start
// based on backtrack, which is time out
// class Solution {
//     unordered_map<char, int> Store;
//     vector<int> res;
//     int times;
//     int k;
//
// public:
//     int takeCharacters(string s, int k)
//     {
//         int end = s.size() - 1;
//         Solution::k = k;
//         trackback(s, 0, end);
//
//         if (res.empty()) {
//             return -1;
//         }
//         sort(res.begin(), res.end());
//         return res.front();
//     }
//
//     void trackback(string& s, int left, int right)
//     {
//
//         if (Store['a'] >= k && Store['b'] >= k && Store['c'] >= k) {
//             res.push_back(times);
//             return;
//         }
//
//         if (left > right) {
//             return;
//         }
//
//         Store[s[left]] += 1;
//         times++;
//         trackback(s, left + 1, right);
//         Store[s[left]] -= 1;
//         times--;
//
//         times++;
//         Store[s[right]] += 1;
//         trackback(s, left, right - 1);
//         Store[s[right]] -= 1;
//         times--;
//     }
// };
class Solution {
public:
    int takeCharacters(string s, int k)
    {
        unordered_map<char, int> Nums;
        int res = 0;
        for (char c : s) {
            Nums[c]++;
        }
        bool flag = Nums['a'] >= k && Nums['b'] >= k && Nums['c'] >= k;

        if (!flag)
            return -1;

        int left = 0;
        int right = 0;
        int len = s.size();
        while (right < len) {
            Nums[s[right++]]--;
            bool flag = Nums['a'] >= k && Nums['b'] >= k && Nums['c'] >= k;
            while (!flag) {
                Nums[s[left++]]++;
                flag = Nums['a'] >= k && Nums['b'] >= k && Nums['c'] >= k;
            }
            res = (right - left) > res ? (right - left) : res;
        }
        return len - res;
    }
};
// @leet end
