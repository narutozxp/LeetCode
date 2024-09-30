// @leet start
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices)
    {
        int jumbo;
        int small;
        vector<int> res;

        // tomato is odd
        if ((tomatoSlices & 1) != 0) {
            return res;
        }

        jumbo = tomatoSlices / 2 - cheeseSlices;
        if (jumbo < 0) {
            return res;
        }

        small = cheeseSlices - jumbo;
        if (small < 0) {
            return res;
        }
        res = { jumbo, small };
        return res;
    }
};
// @leet end
