// #include <memory>
// #include <unordered_map>
#include <vector>
using namespace std;

// @leet start

// method 1
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int, int> count_map;
//         for(int num : nums){
//             count_map[num]++;
//         }
//
//         for(auto & [key, val] : count_map){
//             if(val==1){
//                 return key;
//             }
//         }
//
//         return -1;
//     }
// };

// method 2 by bit operation
class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int ret = 0;
        for (int num : nums) {
            ret ^= num;
        }

        return ret;
    }
};
// @leet end
