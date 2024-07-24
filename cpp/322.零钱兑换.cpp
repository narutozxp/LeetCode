/*
 * @lc app=leetcode.cn id=322 lang=cpp
 *
 * [322] 零钱兑换
 */

// @lc code=start

// without dp table
#include <math.h>

class Solution {
    vector<int> memo;
public:
    int coinChange(vector<int>& coins, int amount)
    {
        memo = vector<int>(amount+1,-2);
        return dp(coins,amount);
    }

    int dp(vector<int>& coins, int amount)
    {
        int tmp = -2;
        if (amount == 0) {
            return 0;
        }
        if (memo[amount] != -2) {
            return memo[amount];
        }
        for (auto coin : coins) {
            if (amount < coin)
                continue;
            tmp = std::min<unsigned int>(tmp, dp(coins, amount - coin));
        }
        memo[amount] = tmp + 1;
        return tmp + 1;
    }
};

// @lc code=end
