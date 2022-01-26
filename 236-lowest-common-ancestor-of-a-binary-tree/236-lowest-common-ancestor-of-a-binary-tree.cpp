/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    //bool pp=false,qq=false,done=false; TreeNode* ans;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return NULL;
        if(root==p||root==q)
            return root;
        TreeNode * lft=lowestCommonAncestor(root->left,p,q);
        TreeNode * rht=lowestCommonAncestor(root->right,p,q);
        if(lft&&rht)
            return root;
        if(lft)
            return lft;
        else
            return rht;
    }
    
    bool found(TreeNode* r, TreeNode* p, TreeNode* q){
        if(!r)
            return false;
        if(r==q||r==p)
            return true;
        bool s=0,ss=0;
        if(r->left)
       s=found(r->left,p,q);
        if(r->right)
         ss=found(r->right,p,q);
        return s||ss;
    }
    
    
        
    
    
    
};