#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res(numRows);
        res[0].push_back(1);

        int row_index = 1;

        while (row_index < numRows) {

            res[row_index].push_back(1);

            for (vector<int>::iterator it = res[row_index - 1].begin() + 1; it < res[row_index - 1].end(); it++) {
                if (it == res[row_index - 1].begin()) {
                } else {
                    res[row_index].push_back(*it + *(it - 1));
                }
            }

            res[row_index].push_back(1);
            row_index++;
        }

        return res;
    }
};
// @leet end
