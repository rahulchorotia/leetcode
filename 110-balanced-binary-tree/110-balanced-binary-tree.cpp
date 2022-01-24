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
    bool check=1;
    bool isBalanced(TreeNode* root) {
        if(!root)
            return 1;
        return maxDepth(root)==-1?0:1;
    }
     int maxDepth(TreeNode* root) {
        
         if(!root)
            return 0;
        int tlh= maxDepth(root->left);
        if(tlh==-1) return -1;
        
         
         int trh=maxDepth(root->right);
         if(trh==-1) return -1;
       
         
         if(abs(tlh-trh)>=2)
         {
             return -1;
         }
         else
         return max(tlh,trh)+1;

    }
};