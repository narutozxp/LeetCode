// @leet start
class Solution {
public:
    bool isPerfectSquare(int num)
    {
        int left = 1;
        int right = num;
        while (left <= right) {
            int mid = (right - left) / 2 + left;
            long mid2 = (long)mid * mid;
            if (num > mid2) {
                left = mid + 1;
            } else if (num < mid2) {
                right = mid - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
// @leet end
