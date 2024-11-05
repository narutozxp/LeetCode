#include <unordered_map>
#include <vector>
using namespace std;

// @leet start
// class Solution {
// public:
//     int findWinningPlayer(vector<int>& skills, int k)
//     {
//         int begin = 0;
//         int win_nums = 0;
//         int len = skills.size();
//
//         unordered_map<int, int> dict;
//         for (int i = 0; i < len; i++) {
//             dict[skills[i]] = i;
//         }
//
//         while (win_nums < k) {
//             int begin_index = begin % len;
//             int next_index = (begin + 1) % len;
//             int begin_num = skills[begin_index];
//             int next_num = skills[next_index];
//             if (begin_num > next_num) {
//                 skills[begin_index] = next_num;
//                 skills[next_index] = begin_num;
//                 win_nums++;
//             } else {
//                 win_nums = 1;
//             }
//             begin++;
//         }
//
//
//         return dict[skills[begin % len]];
//     }
// };

class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k)
    {

        int cur_index = 0;
        int next_index = 1;
        int win_nums = 0;
        int len = skills.size();

        while (win_nums < k && next_index < len) {
            if (skills[cur_index] > skills[next_index]) {
                next_index++;
                win_nums++;
            } else {
                cur_index = next_index;
                next_index++;
                win_nums = 1;
            }
        }

        return cur_index;
    }
};

// @leet end
