#include <algorithm>
using namespace std;

// @leet start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root)
    {
        int depth = 0;
        return isBalanced(root, depth);
    }

    bool isBalanced(TreeNode* root, int& depth)
    {
        int depth_left = 0;
        int depth_right = 0;

        if (root == nullptr) {
            depth = 0;
            return true;
        }

        if (not isBalanced(root->left, depth_left) or not isBalanced(root->right, depth_right)) {
            return false;
        }

        if (depth_right - depth_left > 1 or depth_right - depth_left < -1) {
            return false;
        }

        depth = max(depth_left, depth_right) + 1;
        return true;
    }
};
// @leet end
