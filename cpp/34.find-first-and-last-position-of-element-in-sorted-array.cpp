#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        int middle;
        vector<int> res { -1, -1 };

        if (nums.empty()) {
            return res;
        }

        while (left < right) {
            middle = (left + right) / 2;
            if (nums[middle] < target) {
                left = middle + 1;
            } else if (nums[middle] > target) {
                right = middle - 1;
            } else {
                int res_left = middle;
                int res_right = middle;
                while (res_left >= left && nums[res_left] == target) {
                    res[0] = res_left;
                    res_left--;
                }
                while (res_right <= right && nums[res_right] == target) {
                    res[1] = res_right;
                    res_right++;
                }
                return res;
            }
        }

        if (nums[left] == target) {
            return { left, right };
        } else {
            return res;
        }
    }
};
// @leet end
