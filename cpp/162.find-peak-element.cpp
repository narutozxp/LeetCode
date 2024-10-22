#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        int n = nums.size()-1;
        if(n==0){
            return 0;
        }

        if(nums[0] > nums[1]){
            return 0;
        }

        if(nums[n] > nums[n-1]){
            return n;
        }

        return findPeak(nums, 0, nums.size() - 1);
    }

    int findPeak(vector<int>& nums, int begin, int end)
    {
        if (end - begin < 2) {
            return -1;
        }
        int mid = (begin + end) / 2;
        int isPeak = nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1];
        if(isPeak){
            return mid;
        }

        int left = findPeak(nums, begin, mid);
        if(left != -1){
            return left;
        }
        int right = findPeak(nums, mid, end) + isPeak;
        if(right != -1){
            return  right;
        }
        return -1;
    }
};
// @leet end
