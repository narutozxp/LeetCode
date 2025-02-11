#include <unordered_set>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        vector<int> res;
        for (auto i : s2) {
            if (!s1.insert(i).second) {
                res.push_back(i);
            }
        }
        return res;
    }
};
// @leet end
