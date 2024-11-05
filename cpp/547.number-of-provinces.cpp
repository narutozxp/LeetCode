#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    int Find(int* Province, int index)
    {
        if (Province[index] != index) {
            Province[index] = Find(Province, Province[index]);
        }
        return Province[index];
    }

    void Unite(int* Province, int index1, int index2)
    {
        Province[Find(Province, index1)] = Find(Province, index2);
    }

    int findCircleNum(vector<vector<int>>& isConnected)
    {
        int n = isConnected.size();
        int* Province = new int[n];
        for (int i = 0; i < n; i++) {
            Province[i] = i;
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isConnected[i][j] == 1) {
                    Unite(Province, i, j);
                }
            }
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            if (Province[i] == i) {
                res++;
            }
        }

        return res;
    }
};
// @leet end
