// @leet start
// space: n(n)  time: n(n)
// class Solution {
// public:
//     int findTheWinner(int n, int k)
//     {
//         if (n == 1)
//             return 1;
//         return ((findTheWinner(n - 1, k) + k - 1) % n + 1);
//     }
// };

// space: n(1)  time: (n)
class Solution {
public:
    int findTheWinner(int n, int k)
    {
        int res = 1;
        ;
        for (int i = 2; i <= n; i++) {
            res = (res + k - 1) % i + 1;
        }
        return res;
    }
};

// @leet end
