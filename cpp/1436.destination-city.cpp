#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    string destCity(vector<vector<string>>& paths)
    {
        unordered_map<string, int> dict;
        for (auto& item : paths) {
            dict[item[0]] |= 0x1;
            dict[item[1]] |= 0x2;
        }

        for (auto& [key, value] : dict) {
            if (value == 2) {
                return key;
            }
        }

        return "";
    }
};
// @leet end
