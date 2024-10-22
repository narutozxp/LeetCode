#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k)
    {
        int res = 0;
        for (int num2 : nums2) {
            for (int num1 : nums1) {
                if (num1 % (num2 * k) == 0) {
                    res++;
                }
            }
        }
        return res;
    }
};
// @leet end
