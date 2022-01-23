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
    TreeNode* node = NULL;
     void revpreorder(TreeNode* root)
     {
         if(root->right)
             revpreorder(root->right);
         if(root->left)
             revpreorder(root->left);
         root->left = NULL;
         root->right = node;
         node = root;
     }
    void flatten(TreeNode* root) {
        if(root)
            revpreorder(root);
    }
};