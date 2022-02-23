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
   
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
            return 0;

       
       
        return  fun(root,subRoot)||isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
    bool fun(TreeNode *r,TreeNode *t){
        if(!r||!t) return r==t?1:0;
        
        if(r->val == t->val)
        {
            return fun(r->left,t->left)&&fun(r->right,t->right);
        }
        return 0;
    }
    
};