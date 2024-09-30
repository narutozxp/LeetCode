#include <queue>
using namespace std;

// @leet start
#define TIMEGAP 3000
class RecentCounter {
    queue<int> record;

public:
    RecentCounter()
    {
    }

    int ping(int t)
    {
        record.push(t);
        while (record.back() - record.front() > TIMEGAP) {
            record.pop();
        }
        return record.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
// @leet end
