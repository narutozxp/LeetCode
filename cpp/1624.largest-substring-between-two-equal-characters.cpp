#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s)
    {
        unordered_map<char, vector<int>> indexMap;
        int res = -1;
        for (int i = 0; i < s.size(); i++) {
            indexMap[s[i]].push_back(i);
        }

        unordered_map<char, vector<int>>::iterator iterator;
        for (iterator = indexMap.begin(); iterator != indexMap.end(); iterator++) {
            if (iterator->second.size() < 2) {
                continue;
            }
            res = max(res, iterator->second.back() - iterator->second.front() - 1);
        }
        return res;
    }
};
// @leet end
