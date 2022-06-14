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
    int sum = 0;
    void dfs(TreeNode* child, TreeNode* parent, TreeNode* Grandparent)
    {
        if(child == NULL)
            return;
        if(Grandparent != NULL && Grandparent->val %2 == 0)
        {
            sum += child->val;
        }
        dfs(child->left,child,parent);
        dfs(child->right,child,parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
       dfs(root,NULL,NULL);
        return sum;
    }
};