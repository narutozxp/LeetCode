/*
 * @lc app=leetcode.cn id=438 lang=cpp
 *
 * [438] 找到字符串中所有字母异位词
 */

// @lc code=start
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
    public:
    vector<int> findAnagrams(string s, string t) {
        unordered_map<char, int> need, window;
        for (char c : t) need[c]++;

        int left = 0, right = 0;
        int valid = 0;
        // 记录结果
        vector<int> res;
        while (right < s.size()) {
            char c = s[right];
            right++;
            // 进行窗口内数据的一系列更新
            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c])
                    valid++;
            }
            // 判断左侧窗口是否要收缩
            while (right - left == t.size()) {
                // 当窗口符合条件时，把起始索引加入 res
                if (valid == need.size())
                    res.push_back(left);
                char d = s[left];
                left++;
                // 进行窗口内数据的一系列更新
                if (need.count(d)) {
                    if (window[d] == need[d])
                        valid--;
                    window[d]--;
                }
            }
        }
        return res;
    }
};




// class Solution
// {
// public:
//     vector<int> findAnagrams(string s, string p)
//     {
        
//         unordered_map<char, int> window, need;
//         vector<int> res;
//         if(s.size()<p.size()) return res;
//         int len = p.size();

//         int left = 0, right = len;

//         int valid = 0;
//         int need_valid;

//         // construct condition for valid
//         for (char c : p)
//             need[c]++;
//         for (char c : s.substr(0, len))
//         {
//             if (need.count(c))
//             {
//                 if (window[c] == need[c])
//                 {
//                     valid--;
//                 }
//                 if (window[c] == need[c] - 1)
//                 {
//                     valid++;
//                 }
//             }
//             window[c]++;
//         }
//         need_valid = need.size();
//         if (valid == need_valid)
//         {
//             res.push_back(left);
//         }
//         while (right != s.size())
//         {
//             // cout << valid;

//             // add next item
//             char c = s[right];
//             if (need.count(c))
//             {
//                 if (window[c] == need[c])
//                     valid--;
//                 if (window[c] == need[c] - 1)
//                     valid++;
//             }
//             window[c]++;
//             right++;

//             // remove left item
//             c = s[left];
//             if (need.count(c))
//             {
//                 if (window[c] == need[c])
//                     valid--;
//                 if (window[c] == need[c] + 1)
//                     valid++;
//             }
//             window[c]--;
//             left++; 
//             if (valid == need_valid)
//             {
//                 res.push_back(left);
//             }
//         }
//         return res;
//     }
// };
// @lc code=end
