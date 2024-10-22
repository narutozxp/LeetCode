#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

// @leet start
// class Solution {
// public:
//     int mincostTickets(vector<int>& days, vector<int>& costs)
//     {
//         return minCost(days, 0, costs);
//     }
//
//     // range [begin,)
//     int minCost(vector<int>& days, int begin, vector<int>& costs)
//     {
//         if (begin >= days.size())
//             return 0;
//
//         int days1, days7, days30;
//         int currentDay = days[begin];
//
//         // buy 1 days ticket
//         days1 = minCost(days, ++begin, costs) + costs[0];
//
//         // buy 7 days ticket
//         while (begin < days.size() && days[begin] < currentDay + 7) {
//             begin++;
//         }
//         days7 = minCost(days, begin, costs) + costs[1];
//
//         // buy 20 days ticket
//         while (begin < days.size() && days[begin] < currentDay + 30) {
//             begin++;
//         }
//         days30 = minCost(days, begin, costs) + costs[2];
//
//         return min(days1, min(days7, days30));
//     }
// };


// the same as above content ,but store some value for speed
class Solution {
    vector<int> days;
    vector<int> costs;
    vector<int> memory;
    int duration[3] = { 1, 7, 30 };

public:
    int mincostTickets(vector<int>& days, vector<int>& costs)
    {
        this->days = days;
        this->costs = costs;
        memory.assign(days.size(), -1);

        return minCost(0);
    }

    int minCost(int begin)
    {
        if (begin >= days.size()) {
            return 0;
        }

        if (memory[begin] != -1) {
            return memory[begin];
        }

        int current = begin;

        int minVal = INT_MAX;

        for (int i = 0; i < 3; i++) {
            while (begin < days.size() && days[begin] < days[current] + duration[i]) {
                begin++;
            }
            minVal = min(minVal, minCost(begin) + costs[i]);
        }
        memory[current] = minVal;
        return minVal;
    }
};

// @leet end
