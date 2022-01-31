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
    
    TreeNode* convertBST(TreeNode* root) {
        if(!root)
            return root;
        int x=0;
        fun(root,x);
        return root;
    }
   void fun(TreeNode * r,int &sum){
        if(!r) return;
        fun(r->right,sum);
        sum+=r->val;
        r->val=sum;
        fun(r->left,sum);
    }
};