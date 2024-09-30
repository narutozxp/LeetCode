#include <vector>

using namespace std;

// @leet start
class Solution {
public:
    int differenceOfSum(vector<int>& nums)
    {
        int res = 0;
        for (int item : nums) {
            res += sub(item);
        }
        return res;
    }

    int sub(int num)
    {
        int sum1 = num;
        int sum2 = 0;
        while (num != 0) {
            sum2 += num % 10;
            num /= 10;
        }
        return sum1 - sum2;
    }
};
// @leet end
