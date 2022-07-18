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
    int inorder(TreeNode* root, int &count)
    {
        if(root == NULL)
        {
            return 0;
        }
        int l = inorder(root->left,count);
        int r = inorder(root->right,count);
        count += abs(root->val+l+r-1);
        return root->val+l+r-1;
    }
    int distributeCoins(TreeNode* root) {
      int count=0;
        inorder(root,count);
        return count;
    }
};