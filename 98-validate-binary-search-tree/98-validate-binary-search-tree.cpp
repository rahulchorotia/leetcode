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
typedef long long int lli;
class Solution {
public:
   
    bool isValidBST(TreeNode* root,lli ll=LLONG_MIN,lli rl=LLONG_MAX) {
        if(!root->left&&!root->right)   return 1;
        
        if(root->left and root->right)
        {
            bool l=(root->val>root->left->val)&&(root->left->val>ll)?1:0;
            bool r=(root->val<root->right->val)&&(root->right->val<rl)?1:0;
            if(l&&r)
                return isValidBST(root->left,ll,root->val)&&isValidBST(root->right,root->val,rl);
            return false;
        }
        if(root->left)
        {
            if((root->val > root->left->val)&&(root->left->val>ll))
             return isValidBST(root->left,ll,root->val);
            return 0;
        }
          
            if((root->val <root->right->val)&&(root->right->val<rl))
             return isValidBST(root->right,root->val,rl);
            return 0;     
    }
};
