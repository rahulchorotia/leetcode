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
    bool isSymmetric(TreeNode* r) {
        if(!r)
            return true;
        return fun(r->left,r->right);
    }
    bool fun(TreeNode *l,TreeNode *r){
        if(!r||!l)
            return r==l;
        if(l->val!=r->val)
            return 0;
        return fun(l->right,r->left)&&fun(l->left,r->right);
    }
};