/*
 * @lc app=leetcode.cn id=52 lang=cpp
 *
 * [52] N 皇后 II
 */

// @lc code=start
class Solution {
public:
    int totalNQueens(int n)
    {
        int res = 0;
        vector<string> status(n, string(n, '.'));
        int row = n - 1;
        backtrace(res, status, n, row);
        return res;
    }

    void backtrace(int& res, vector<string>& status, int size, int row)
    {
        if (row == -1) {
            res++;
            return;
        }
        for (int i = 0; i < size; i++) {
            if (isValid(status, size, row, i)) {
                status[row][i] = 'Q';
                backtrace(res, status, size, row - 1);
                status[row][i] = '.';
            }
        }
    }

    bool isValid(vector<string>& status, int size, int row, int index)
    {
        for (int i = 1; (row + i) < size; i++) {
            if (status[row + i][index] == 'Q')
                return false;
            if (index + i < size)
                if (status[row + i][index + i] == 'Q')
                    return false;
            if (index - i >= 0)
                if (status[row + i][index - i] == 'Q')
                    return false;
        }
        return true;
    }
};

// @lc code=end
