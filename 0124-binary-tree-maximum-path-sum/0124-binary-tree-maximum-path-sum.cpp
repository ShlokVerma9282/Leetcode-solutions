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
    int m = INT_MIN;
    int finds(TreeNode* root){
        if(!root) return 0;
        
        return root->val+max(0,max(finds(root->left),finds(root->right)));
        
    }
    void solve(TreeNode* root){
        if(root){
        solve(root->left);
        solve(root->right);
        
        int l = finds(root->left);
        int r=  finds(root->right);
        
        if(l<0)
        {
            l=0;
        }
        if(r<0)
        {
            r=0;
        }
        m = max(l+r+root->val,m);
        }
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return m;
    }
};