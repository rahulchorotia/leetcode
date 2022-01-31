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
    int sum=0;
    TreeNode* convertBST(TreeNode* root) {
        if(!root)
            return root;
        int x=0;
        fun(root);
        return root;
    }
   void fun(TreeNode * r){
        if(!r) return;
        fun(r->right);
        sum+=r->val;
        r->val=sum;
        fun(r->left);
    }
};