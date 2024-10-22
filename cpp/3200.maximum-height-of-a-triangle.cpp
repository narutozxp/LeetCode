#include <algorithm>
#include <cmath>
using namespace std;

// @leet start
class Solution {
public:
    int maxHeightOfTriangle(int red, int blue)
    {
        int minVal = min(red, blue);
        int maxVal = max(red, blue);

        int suma = 0;
        int sumb = 0;
        int flag = 0;

        int n = 0;
        while (1) {
            n++;
            if (flag == 0) {
                suma += n;
                if (suma > maxVal || sumb > minVal) {
                    return n - 1;
                }
                flag = 1;
            } else {
                sumb += n;
                if (sumb > maxVal || suma > minVal) {
                    return n - 1;
                }
                flag = 0;
            }
        }
    }
};
// @leet end
