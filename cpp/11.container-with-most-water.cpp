// @leet start
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int left = 0;
        int right = height.size() - 1;
        int capacity = 0;

        while (left < right) {
            int tmp;
            if (height[left] < height[right]) {
                tmp = height[left] * (right - left);
                left++;
            } else {
                tmp = height[right] * (right - left);
                right--;
            }
            capacity = capacity < tmp ? tmp : capacity;
        }

        return capacity;
    }
};
// @leet end

