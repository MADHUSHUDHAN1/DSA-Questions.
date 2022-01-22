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
    vector<int> ans;
    int height(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        else {
            int lheight = height(root->left);
            int rheight = height(root->right);
            if(lheight > rheight)
                return (lheight+1);
            else 
                return (rheight+1);
        }
    }
    void currentLevelOrder(TreeNode* root,int level)
    {
        if(root == NULL)
            return;
        if(level == 1)
        {
            ans.push_back(root->val);
        }
        else if(level>1) {
            currentLevelOrder(root->left,level-1);
            currentLevelOrder(root->right,level-1);
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
       int h= height(root);
        vector<vector<int>> res;
        for(int i=h; i>=1; i--)
        {
            currentLevelOrder(root,i);
            res.push_back(ans);
            ans.clear();
        }
        return res;
    }
};