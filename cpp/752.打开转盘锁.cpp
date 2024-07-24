/*
 * @lc app=leetcode.cn id=752 lang=cpp
 *
 * [752] 打开转盘锁
 */

// @lc code=start
#include <queue>
#include <set>
#include <string>
#include <vector>
using std::queue;
using std::set;
using std::string;
using std::vector;

class Solution {
public:
    int openLock(vector<string>& deadends, string target)
    {
        int res = 0;
        queue<string> q;
        set<string> visited(deadends.begin(), deadends.end());

        if (visited.count("0000") == 1)
            return -1;
        q.push("0000");
        while (q.size() != 0) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                string str = q.front();
                q.pop();
                if (str == target) {
                    return res;
                }
                addQueue(str, q, visited);
            }
            res++;
        }
        // no ways to realize our goal
        return -1;
    }

    void addQueue(string& str, queue<string>& q, set<string>& visited)
    {
        int len = str.length();
        string tmp;
        for (int i = 0; i < len; i++) {
            // up one
            tmp = str;
            if (tmp[i] == '9')
                tmp[i] == '0';
            else
                tmp[i] += 1;

            if (visited.count(tmp) == 0) {
                visited.insert(tmp);
                q.push(tmp);
            }

            // doen one
            tmp = str;
            if (tmp[i] == '0')
                tmp[i] = '9';
            else
                tmp[i] -= 1;
            if (visited.count(tmp) == 0) {
                visited.insert(tmp);
                q.push(tmp);
            }
        }
    }

    // bool inDeadends(const string& str, vecotr<string>& deadends)
    // {
    //     for (auto item : deadends) {
    //         if (str == item)
    //             return true;
    //             deadends.
    //     }
    //     return false;
    // }
};
// @lc code=end
