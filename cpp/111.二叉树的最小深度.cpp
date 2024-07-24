/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */

// @lc code=start
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

#include <queue>
using std::queue;
class Solution {
public:
    int minDepth(TreeNode* root)
    {
        int depth = 1;
        queue<TreeNode*> q;
        TreeNode* cur;
        if (root == nullptr)
            return 0;
        q.push(root);
        while (q.size() != 0) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                cur = q.front();
                if (cur->left == nullptr && cur->right == nullptr)
                    return depth;
                if (cur->right != nullptr)
                    q.push(cur->right);
                if (cur->left != nullptr)
                    q.push(cur->left);
                q.pop();
            }
            depth++;
        }
        return 0;
    }
};
// @lc code=end
