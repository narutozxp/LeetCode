#include <unordered_set>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        // int raw_size = nums.size();
        // unordered_set<int> nums_set(nums.begin(), nums.end());
        // int post_size = nums_set.size();
        // return raw_size != post_size;

        unordered_set<int> s;
        for (int x : nums) {
            if (s.find(x) == s.end()) {
                s.insert(x);
            } else {
                return true;
            }
        }
        return false;
    }
};
// @leet end
