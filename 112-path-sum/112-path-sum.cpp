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
    void dfs(TreeNode* root, int targetSum,bool &ans,int sum)
    {
        if(!root->left && !root->right)
        {
            if(sum == targetSum)
                ans= true;
            return;
        }
        if(root->left)
        {
            dfs(root->left,targetSum,ans,sum+root->left->val);
        }
        if(root->right)
        {
            dfs(root->right,targetSum,ans,sum+root->right->val);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       if(root==NULL)
           return false;
        bool ans= false;
        int sum = root->val;
        dfs(root,targetSum,ans,sum);
        return ans;
    }
};