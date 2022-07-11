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
    int maxAnc(TreeNode* root, int mn, int mx)
    {
        if(root == NULL)
            return mx - mn;
        int left = maxAnc(root->left,min(mn,root->val),max(mx,root->val));
        int right = maxAnc(root->right,min(mn,root->val),max(mx,root->val));
        return max(left,right);
    }
    int maxAncestorDiff(TreeNode* root) {
        int mn = INT_MAX;
        int mx =INT_MIN;
        return maxAnc(root,mn,mx);
    }
};