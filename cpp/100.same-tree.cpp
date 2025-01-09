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
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        // null node
        if (p == nullptr || q == nullptr) {
            if (p == q) {
                return true;
            }
            return false;
        }

        // non-null node
        if (p->val != q->val) {
            return false;
        }

        return isSameTree(p->left, q->left) == true && isSameTree(p->right, q->right);
    }
};
// @leet end
