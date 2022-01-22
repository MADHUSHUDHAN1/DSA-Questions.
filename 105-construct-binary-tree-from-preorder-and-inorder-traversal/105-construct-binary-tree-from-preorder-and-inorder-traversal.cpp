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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int& rootIndx,int left,int right)
    {
        if(left>right)
            return NULL;
        
        int i=left;
        while(inorder[i] != preorder[rootIndx])
            i++;
        
        TreeNode* node = new TreeNode(inorder[i]);
        rootIndx++;
        node->left = build(preorder,inorder,rootIndx,left,i-1);
        node->right = build(preorder,inorder,rootIndx,i+1,right);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootIndx=0;
        return build(preorder,inorder,rootIndx,0,inorder.size()-1);
    }
};