#include <string>
using namespace std;

// @leet start
class Solution {
public:
    string reverseVowels(string s)
    {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            bool istVowel_left = isVowel(s[left]);
            bool isVowel_right = isVowel(s[right]);

            if (istVowel_left && isVowel_right) {
                char tmp = s[right];
                s[right] = s[left];
                s[left] = tmp;
                left++;
                right--;
                continue;
            }

            if (!istVowel_left) {
                left++;
            }

            if (!isVowel_right) {
                right--;
            }
        }

        return s;
    }

    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};
// @leet end
