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
    TreeNode* removeLeafNodes(TreeNode* root, int val) {
        if(root->left) root->left = removeLeafNodes(root->left,val);
        if(root->right) root->right = removeLeafNodes(root->right,val);
        
        if(root->left == root->right && root->val == val)
            return NULL;
        return root;
    }
};