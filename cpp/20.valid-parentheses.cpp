#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

// @leet start
class Solution {
public:
    bool isValid(string s)
    {
        if (s.size() % 2 != 0) {
            return false;
        }

        unordered_map<char, char> dict {
            { ')', '(' },
            { '}', '{' },
            { ']', '[' }
        };

        stack<char> Stack;

        Stack.push(' ');

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                Stack.push(c);
            } else {
                if (dict[c] == Stack.top()) {
                    Stack.pop();
                } else {
                    return false;
                }
            }
        }
        return Stack.size() == 1;
    }
};
// @leet end
