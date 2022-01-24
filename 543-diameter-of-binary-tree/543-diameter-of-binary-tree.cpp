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
    int maxi=INT_MIN;
    int diameterOfBinaryTree(TreeNode* root,int h=1) {
        if(!root)
            return 0;
       maxDepth(root);
        return maxi;
    }
    int maxDepth(TreeNode* root) {
        
         if(!root)
            return 0;
        int tlh= maxDepth(root->left);
        int trh=maxDepth(root->right);
        if(maxi<tlh+trh)
         {
             maxi=tlh+trh;
            return max(tlh,trh)+1;
         }
         else
         return max(tlh,trh)+1;

    }
};