// @leet start

// method 1 递归
/*class Solution {*/
/*public:*/
/*    int kthGrammar(int n, int k)*/
/*    {*/
/*        if (k == 1 || n == 1) {*/
/*            return 0;*/
/*        }*/
/*        if (k == 2)*/
/*            return 1;*/
/*        k = k - 1;*/
/*        return kthGrammar(n - 1, k / 2 + 1) ^ (k % 2);*/
/*    }*/
/*};*/

// method 2 找规律，最后等价于判断（K-1）中1的个数，然后判断奇偶性
class Solution {
public:
    int kthGrammar(int n, int k)
    {
        k--;
        int res = 0;
        while (k > 0) {
            k &= k - 1;
            res ^= 1;
        }
        return res;
    }
};

// @leet end
