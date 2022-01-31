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
    int don;
    int flag=1;
    bool isUnivalTree(TreeNode* root) {
        if(!root) return 0;
        don=root->val;
        fun(root);
        return flag;
    }
    void fun(TreeNode *r){
        if(!r) return;
        if(r->val!=don)
            flag=0;
        fun(r->left);
        fun(r->right);
    }
};