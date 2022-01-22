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
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,int& rootIndx,int left,int right)
    {
        if(left>right)
            return NULL;
        int pivot=left;
        while(inorder[pivot] != postorder[rootIndx])
            pivot++;
         TreeNode* node = new TreeNode(inorder[pivot]);
        rootIndx--;
        node->right = build(inorder,postorder,rootIndx,pivot+1,right);
        node->left =build(inorder,postorder,rootIndx,left,pivot-1);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int rootIndx=postorder.size()-1;
        return build(inorder,postorder,rootIndx,0,inorder.size()-1);
    }
};