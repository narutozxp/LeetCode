/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
using namespace std;
#include <math.h>
class Solution {
    int res = 0;
    int depth = 0;

public:
    int maxDepth(TreeNode* root)
    {
        traverse(root);
        return res;
    }
    void traverse(TreeNode* root)
    {
        if (!root) {
            return;
        }
        depth++;
        if (root->left == nullptr && root->right == nullptr) {
            res = max(depth, res);
        }
        traverse(root->left);
        traverse(root->right);
        depth--;
    }
};

// @lc code=end
