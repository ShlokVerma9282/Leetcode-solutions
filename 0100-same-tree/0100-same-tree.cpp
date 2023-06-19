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
    bool isSameTree(TreeNode* p, TreeNode* q) {
     // The below 3 If Else Statements checking 
        // if those 2 binary trees are structurally identical
        if(p==NULL && q==NULL) return true;
        else if(p!=NULL && q==NULL) return false;
        else if(p==NULL && q!=NULL) return false;
        
        // The below If Statement checking 
        // if those 2 binary trees have nodes with the same value
        if(p->val != q->val) return false;
        
        // Traversing Left
        bool left = isSameTree(p->left, q->left);
        // Traversing Right
        bool right = isSameTree(p->right, q->right);
        
        return left && right;   
    }
};