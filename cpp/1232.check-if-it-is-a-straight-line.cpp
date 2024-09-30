// @leet start
#include <vector>
using namespace std;
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        //(x-x1)(y2-y1) = (x2-x1)(y-y1)
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];

        int ysub = y2 - y1;
        int xsub = x2 - x1;
        for (auto point : coordinates) {
            if ((point[0] - x1) * ysub != xsub * (point[1] - y1)) {
                return false;
            }
        }

        return true;
    }
};
// @leet end
