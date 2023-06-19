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
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        traverse(root,dia);
        return dia;
    }
    int traverse(TreeNode* root,int &dia)
    {
        if(!root) return 0;
        int left=traverse(root->left,dia);
        int right=traverse(root->right,dia);
        dia=max(dia,left+right);
        return 1+max(left,right);
    }
};