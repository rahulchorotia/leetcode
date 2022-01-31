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
    TreeNode* pruneTree(TreeNode* root) {
        if(!root) return NULL;
        pruneTree1(root);
           
        return root;
    }
     bool pruneTree1(TreeNode * &root) {
        if(!root) return NULL;
        
        bool ll=pruneTree1(root->left);
        bool rr=pruneTree1(root->right);
        if(ll==0)
            root->left=NULL;
         if(rr==0)
             root->right=NULL;
         if(!ll&&!rr&root->val==0)
             root=NULL;
        return root==NULL?0:1;
    }
};