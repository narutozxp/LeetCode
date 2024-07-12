/*
 * @lc app=leetcode.cn id=89 lang=cpp
 *
 * [89] 格雷编码
 */

// @lc code=start
#include<math.h>
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        size_t num = 1<<n;
        // size_t mask = num-1;
        for (size_t i = 0; i < num; i++)
        {   
            // 不需要mask，因为最高位就是0
            res.push_back(((i>>1)^i));
        }
        return res;
                        
    }
};
// @lc code=end

