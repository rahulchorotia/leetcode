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
    bool done;
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)   return new TreeNode(val);
       fun(root,val);
        return root;
    }
    void fun(TreeNode *root,int &val){
        if(!root)return;
         if(val<root->val&&!root->left)
        {
            root->left=new TreeNode(val);
            return ;
        }
        else if(val>root->val&&!root->right)
        {
            root->right=new TreeNode(val);
            return ;
        }
        else if(val>root->val&&root->right)
        {
           fun(root->right,val);
        }
        else if(val<root->val&&root->left)
        {
           fun(root->left,val);
        }
        return;
    }
   
};