#include <algorithm>
#include <climits>
#include <cmath>
#include <unordered_map>
#include <vector>
using namespace std;

// @leet start
// based on backtrack, but timeout
//
// class Solution {
//     int len;
//     vector<int>* passingFees;
//     vector<unordered_map<int, int>> times;
//     int result;
//     int maxTime;
//     vector<int> visited;
//
// public:
//     int minCost(int maxTime, vector<vector<int>>& edges, vector<int>& passingFees)
//     {
//         len = passingFees.size();
//         this->passingFees = &passingFees;
//         times.resize(len);
//         result = INT_MAX;
//         this->maxTime = maxTime;
//         visited.assign(len, 0);
//         for (auto& item : edges) {
//             int from = item[0];
//             int to = item[1];
//             int time = item[2];
//             if (times[from].count(to) != 0) {
//                 times[from][to] = min(time, times[from][to]);
//                 times[to][from] = min(time, times[to][from]);
//             } else {
//                 times[from][to] = time;
//                 times[to][from] = time;
//             }
//         }
//
//         backtrack(0, 0, passingFees[0]);
//         return result == INT_MAX ? -1 : result;
//     }
//
//     void backtrack(int current, int sumTime, int cost)
//     {
//         if (sumTime > maxTime) {
//             return;
//         }
//
//         if (cost > result) {
//             return;
//         }
//
//         if (current == len - 1) {
//             result = cost;
//             return;
//         }
//
//         for (auto [candi, time] : times[current]) {
//             if (visited[candi] == 0) {
//
//                 visited[candi] = 1;
//                 backtrack(candi, sumTime + time, cost + (*passingFees)[candi]);
//                 visited[candi] = 0;
//             }
//         }
//     }
// };

// based on dp
class Solution {
public:
    int minCost(int maxTime, vector<vector<int>>& edges, vector<int>& passingFees)
    {
        int len = passingFees.size();
        vector<vector<int>> f(maxTime + 1, vector<int>(len, INT_MAX / 2));
        f[0][0] = passingFees[0];
        for (int t = 1; t <= maxTime; t++) {
            for (auto& item : edges) {
                int from = item[0];
                int to = item[1];
                int time = item[2];

                if (t >= time) {
                    f[t][to] = min(f[t][to], f[t - time][from] + passingFees[to]);
                    f[t][from] = min(f[t][from], f[t - time][to] + passingFees[from]);
                }
            }
        }

        int res = INT_MAX;
        for (int t = 0; t <= maxTime; t++) {
            res = min(res, f[t][len - 1]);
        }

        return res == INT_MAX / 2 ? -1 : res;
    }
};
// @leet end
