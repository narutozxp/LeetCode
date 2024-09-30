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
#include <vector>
using namespace std;
class Solution {
    vector<int> res;

public:
    vector<int> inorderTraversal(TreeNode* root)
    {
        traver(root);
        return res;
    }

    void traver(TreeNode* root)
    {
        if (!root)
            return;
        traver(root->left);
        res.push_back(root->val);
        traver(root->right);
    }
};
// @leet end
