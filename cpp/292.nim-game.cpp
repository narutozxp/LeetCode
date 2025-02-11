// @leet start
class Solution {
public:
    // timeout
    // bool canWinNim(int n)
    // {
    //     if (n <= 3) {
    //         return true;
    //     }
    //
    //     return !canWinNim(n - 1) || !canWinNim(n - 2) || !canWinNim(n - 3);
    // }

    bool canWinNim(int n)
    {
        int res = n % 4;
        return res != 0;
    }
};
// @leet end
