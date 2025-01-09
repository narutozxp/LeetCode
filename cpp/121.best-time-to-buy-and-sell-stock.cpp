#include <algorithm>
#include <cstdint>
#include <vector>
using namespace std;

// @leet start

// timeout
// class Solution {
// public:
//     int maxProfit(vector<int>& prices)
//     {
//         int end = prices.size() - 1;
//         int res = 0;
//         for (int left = 0; left < end; left++) {
//             for (int right = left + 1; right <= end; right++) {
//                 res = max(res, prices[right] - prices[left]);
//             }
//         }
//         return res;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int history_min = INT32_MAX;
        int res = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < history_min) {
                history_min = prices[i];
            } else {

                res = max(res, prices[i] - history_min);
            }
        }
        return res;
    }
};

// @leet end

