#include <algorithm>
#include <climits>
#include <cstring>
#include <vector>
using namespace std;

// @leet start

// time out
// class Solution {
// public:
//     int maxTotalReward(vector<int>& rewardValues)
//     {
//         sort(rewardValues.begin(),rewardValues.end());
//         return maxTotal(rewardValues, 0, 0);
//     }
//
//     int maxTotal(vector<int>& rewardValues, int begin, int total)
//     {
//
//         int res = 0;
//         for (int i = begin; i < rewardValues.size(); i++) {
//             if (rewardValues[i] > total) {
//                 res = max(res, rewardValues[i] + maxTotal(rewardValues, i + 1, total + rewardValues[i]));
//             }
//         }
//
//         return res;
//     }
// };

class Solution {
public:
    int maxTotalReward(vector<int>& rewardValues)
    {
        sort(rewardValues.begin(), rewardValues.end());
        int max_num = rewardValues.back();
        vector<int> dp(max_num * 2);
        dp[0] = 1;

        for (int item : rewardValues) {
            for (int i = item; i <= 2 * item - 1; i++) {
                if (dp[i - item]) {
                    dp[i] = 1;
                }
            }
        }

        int res = 0;
        for (int i = 0; i < dp.size(); i++) {
            if (dp[i])
                res = max(i, res);
        }
        return res;
    }
};

// @leet end
