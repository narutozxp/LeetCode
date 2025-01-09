#include <unordered_map>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_map<int, int> num2index;
        for (int i = 0; i < nums.size(); i++) {
            if (num2index.count(nums[i]) && (i - num2index[nums[i]] <= k)) {
                return true;
            }
            num2index[nums[i]] = i;
        }
        return false;
    }
};
// @leet end
