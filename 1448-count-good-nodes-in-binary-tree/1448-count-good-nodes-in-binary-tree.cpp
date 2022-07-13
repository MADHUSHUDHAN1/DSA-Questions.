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
    void check(TreeNode* root, int &count, int mx)
    {
        if(root == NULL)
            return;
        
        mx = max(mx,root->val);
        if(root->val >= mx) count++;
        
        check(root->left,count,mx);
        check(root->right,count,mx);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        int count =0;
        int mx = INT_MIN;
        check(root,count,mx);
        return count;
    }
};