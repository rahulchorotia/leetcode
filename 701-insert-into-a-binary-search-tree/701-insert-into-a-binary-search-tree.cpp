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
        if(!root){
            return new TreeNode(val);
        }
        TreeNode* curr = root;
        while(curr){
            if(curr->val > val and curr->left)
                curr= curr->left;
            else if(curr->val < val and curr->right)
                curr = curr->right;
            else
                break;
        }
        TreeNode* t = new TreeNode(val);
        if(curr->val > val)
            curr->left = t;
        else
            curr->right = t;
            
        return root;
    }
   
};