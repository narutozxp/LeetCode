// @leet start
// class Solution {
// public:
//     int addDigits(int num)
//     {
//         while (num > 9) {
//             int sum = 0;
//             while (num > 0) {
//                 sum += num % 10;
//                 num = num / 10;
//             }
//             num = sum;
//         }
//         return num;
//     }
// };

// method 2
class Solution {
public:
    int addDigits(int num)
    {
        return (num - 1) % 9 + 1;
    }
};
// @leet end
