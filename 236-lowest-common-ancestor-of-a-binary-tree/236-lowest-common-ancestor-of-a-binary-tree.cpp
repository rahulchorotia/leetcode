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
        if(root==p||root==q)
            return root;
        bool pp=found(root->left,p,q);
        bool qq=found(root->right,p,q);
        if(pp&&qq)
            return root;
        if(pp)
            return lowestCommonAncestor(root->left,p,q);
        else
        return lowestCommonAncestor(root->right,p,q);
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