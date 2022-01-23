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
    void dfs(TreeNode* root,int targetSum,int sum,vector<int> ans,vector<vector<int>>& res)
    {
        if(root != NULL)
        {
            sum += root->val;
            ans.push_back(root->val);
        }
        if(!root->left && !root->right)
        {
            if(sum == targetSum)
            {
                res.push_back(ans);
            }
            return;
        }
        if(root->left)
        {
            dfs(root->left,targetSum,sum,ans,res);
        }
        
        if(root->right)
        {
            dfs(root->right,targetSum,sum,ans,res);
        }
        sum -= root->val;
        ans.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>> res;
        if(root == NULL)
            return res;
        vector<int> ans;
        dfs(root,targetSum,0,ans,res);
        return res;
    }
};