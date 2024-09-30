#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color)
    {
        vector<vector<int>> candidator;
        char flag = color == 'W' ? 'B' : 'W';
        vector<int> point;

        // add canidator
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                point = { rMove + i, cMove + j, i, j };
                if (isValidPoint(point)) {
                    if (board[point[0]][point[1]] == flag)
                        candidator.push_back(std::move(point));
                }
            }
        }

        while (!candidator.empty()) {
            point = candidator.back();
            candidator.pop_back();
            if (board[point[0]][point[1]] == color) {
                return true;
            } else {
                // update point
                point = { point[0] + point[2], point[1] + point[3], point[2], point[3] };
                if (isValidPoint(point)) {
                    char curColor = board[point[0]][point[1]];
                    if (curColor == flag) {
                        candidator.push_back(std::move(point));
                    } else if (curColor == color) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    inline bool isValidPoint(vector<int>& point)
    {
        int x = point[0];
        int y = point[1];
        if (x < 8 && x >= 0 && y < 8 && y >= 0) {
            return true;
        }
        return false;
    }
};
// @leet end
