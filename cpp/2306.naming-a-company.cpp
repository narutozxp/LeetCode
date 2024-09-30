// @leet start

#include <cstddef>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution {
public:
    long long distinctNames(vector<string>& ideas)
    {
        unordered_map<char, unordered_set<string>> group;
        for (auto& item : ideas) {
            group[item[0]].insert(item.substr(1));
        }

        long long ans = 0;
        int crossNum;
        for (auto&& [s1Key, s1Val] : group) {
            for (auto&& [s2Key, s2Val] : group) {
                if (s1Val == s2Val) {
                    continue;
                }
                crossNum = getCrossSet(s1Val, s2Val);
                ans += (s1Val.size() - crossNum) * (s2Val.size() - crossNum);
            }
        }

        return ans;
    }

    size_t getCrossSet(unordered_set<string>& s1, unordered_set<string>& s2)
    {
        size_t ans = 0;
        for (auto& item : s1) {
            if (s2.count(item)) {
                ans++;
            }
        }

        return ans;
    }
};
// @leet end
