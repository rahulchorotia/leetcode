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
    int ans=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root||(!root->right&&!root->left))
            return 0;
       sum(root,0);
        return ans;
    }
    int sum(TreeNode* root,bool f) {
        if(!root)
            return 0;
        if(!root->left&&!root->right){
            if(f==1)
                ans+=root->val;
            return root->val;
        }
        int l=sum(root->left,1);
        int r=sum(root->right,0);
        
        return root->val;
    }
};