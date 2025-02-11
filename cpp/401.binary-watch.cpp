#include <string>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn)
    {
        vector<string> res;
        for (int h = 0; h < 5; h++) {
            if (turnedOn - h > 6 || h > turnedOn) {
                continue;
            }
            vector<int> hours = intWithNBinary(h, 4);
            vector<int> minutes = intWithNBinary(turnedOn - h, 6);
            for (auto hour : hours) {
                if (hour > 11) {
                    continue;
                }
                string tmp;
                tmp = to_string(hour) + ":";
                for (auto minute : minutes) {
                    if (minute > 59) {
                        continue;
                    }
                    if (minute < 10) {
                        res.push_back(tmp + "0" + to_string(minute));
                    } else {
                        res.push_back(tmp + to_string(minute));
                    }
                }
            }
        }
        return res;
    }

    vector<int> intWithNBinary(int num, int highest_bit)
    {

        vector<int> res;
        if (num == 0) {
            res.push_back(0);
            return res;
        }

        for (int i = num - 1; i < highest_bit; i++) {
            vector<int>&& tmp = intWithNBinary(num - 1, i);
            for (auto& item : tmp) {
                res.push_back(item | (1 << i));
            }
        }
        return res;
    }
};
// @leet end
