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
    int ans=0;
    vector<int> res ;
    void solve(int n)
    {
        if(ans == 0)
        {
            ans += n;
        }
        else {
            ans *= 10;
            ans += n;
        }
    }
    void inorder(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        solve(root->val);
        if(root->left == NULL && root->right == NULL)
        {
            res.push_back(ans);
           // ans /=10;
            
        }
        inorder(root->left);
        inorder(root->right);
        ans /=10;
    }
    int sumNumbers(TreeNode* root) {
        inorder(root);
        int sum =0;
        for(int i=0; i<res.size(); i++)
        {
            sum += res[i];
        }
        return sum;
    }
};