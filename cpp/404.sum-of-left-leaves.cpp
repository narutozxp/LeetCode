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
    int sumOfLeftLeaves(TreeNode* root)
    {
        int sum = 0;
        if (!root) {
            return 0;
        }
        if (isLeaf(root->left)) {
            sum += root->left->val;
        } else {
            sum += sumOfLeftLeaves(root->left);
        }
        sum += sumOfLeftLeaves(root->right);
        return sum;
    }

    bool isLeaf(TreeNode* root)
    {
        if (!root || root->left || root->right) {
            return false;
        }
        return true;
    }
};
// @leet end
