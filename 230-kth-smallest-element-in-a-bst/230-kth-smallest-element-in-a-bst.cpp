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
    TreeNode *r=NULL;
    int c=0;
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return 0;
        if(r)
            return r->val;
        kthSmallest(root->left,k);
        c++;
        if(c==k){
            
                r=root;
            return r->val;
        }
        kthSmallest(root->right,k);
        return r?r->val:0;
    }
};