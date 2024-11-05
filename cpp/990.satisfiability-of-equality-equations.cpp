#include <string>
#include <vector>
using namespace std;

// @leet start
class Solution {
public:
    char Find(vector<char>& parent, char ch)
    {
        if (parent[ch - 'a'] != ch) {
            return Find(parent, parent[ch - 'a']);
        } else {
            return ch;
        }
    }

    void Union(vector<char>& parent, char ch1, char ch2)
    {
        parent[Find(parent, ch1) - 'a'] = Find(parent, ch2);
    }

    bool equationsPossible(vector<string>& equations)
    {
        vector<char> parent(26);
        for (int i = 0; i < 26; i++) {
            parent[i] = 'a' + i;
        }

        for (string& str : equations) {
            if (str[1] == '=') {
                char node1 = str[0];
                char node2 = str[3];
                Union(parent, node1, node2);
            }
        }

        for (string& str : equations) {
            if (str[1] == '!') {
                char node1 = str[0];
                char node2 = str[3];
                char p1 = Find(parent, node1);
                char p2 = Find(parent, node2);
                if (p1 == p2) {
                    return false;
                }
            }
        }

        return true;
    }
};
// @leet end
