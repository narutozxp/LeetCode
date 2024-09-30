#include <set>
#include <unordered_map>
#include <vector>
using namespace std;

// @leet start

/**
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3)
    {
        set<int> interSection;
        for (int item1 : nums1) {
            for (int item2 : nums2) {
                if (item1 == item2)
                    interSection.insert(item1);
            }
            for (int item3 : nums3) {
                if (item1 == item3)
                    interSection.insert(item1);
            }
        }

        for (int item2 : nums2) {
            for (int item3 : nums3) {
                if (item2 == item3)
                    interSection.insert(item2);
            }
        }

        vector<int> res;
        res.assign(interSection.begin(), interSection.end());
        return res;
    }
};
**/

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3)
    {
        unordered_map<int, int> keyMap;
        vector<int> res;
        for (int item : nums1) {
            keyMap[item] = 1;
        }
        for (int item : nums2) {
            keyMap[item] |= 2;
        }
        for (int item : nums3) {
            keyMap[item] |= 4;
        }

        for (auto [key, val] : keyMap) {
            if (val & (val - 1)) {
                res.push_back(key);
            }
        }
        return res;
    }
};
// @leet end
