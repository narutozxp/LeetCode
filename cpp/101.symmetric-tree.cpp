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
    bool isSymmetric(TreeNode* root)
    {
        TreeNode* right = root->right;
        TreeNode* left = root->left;
        TreeNode* tmp;

        if (left == nullptr && right == nullptr) {
            return true;
        } else if (left != nullptr && right != nullptr) {
            if (left->val != right->val) {
                return false;
            }

            tmp = left->left;
            left->left = right->left;
            right->left = tmp;

            return isSymmetric(left) && isSymmetric(right);

        } else {
            return false;
        }
    }
};
// @leet end
