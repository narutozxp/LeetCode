// @leet start
class Solution {
public:
    bool isHappy(int n)
    {
        int fast = n, slow = n;

        do {
            slow = transform(slow);
            fast = transform(fast);
            fast = transform(fast);
        } while (fast != slow);

        return fast == 1;
    }

    int transform(int n)
    {
        int res = 0;
        while (n > 0) {
            int last = n % 10;
            res += last * last;
            n = n / 10;
        }
        return res;
    }
};
// @leet end
