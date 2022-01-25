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
    void flatten(TreeNode* root) {
        if(!root)
            return;
        queue<TreeNode*>q;
        inorder(root,q);
       
        root=q.front();
        q.pop();
        TreeNode* head=root;
        while(!q.empty()){
            head->right=q.front();
            q.pop();
            head->left=NULL;
            head=head->right;
        }
        head->right=NULL;
        head->left=NULL;
    }
    void inorder(TreeNode *r,queue<TreeNode*>&q){
        if(!r)
            return;
        q.push(r);
        inorder(r->left,q);
        inorder(r->right,q);
    }
    
};