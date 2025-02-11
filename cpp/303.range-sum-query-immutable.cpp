#include <vector>
using namespace std;

// @leet start
class NumArray {
private:
    vector<int> sum;

public:
    NumArray(vector<int>& nums)
    {
        int size = nums.size();
        sum.resize(size);
        sum[0] = nums[0];
        for (int i = 1; i < size; i++) {
            sum[i] = sum[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right)
    {
        if (left != 0) {
            return sum[right] - sum[left - 1];
        } else {
            return sum[right];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @leet end
