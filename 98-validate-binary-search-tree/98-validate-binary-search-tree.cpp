
class Solution {
public:
    bool isValidBST(TreeNode* root,TreeNode * mini=NULL,TreeNode *maxi=NULL) 
    {
        if(!root)
            return 1;
        return help(root);
       return 0;
    }
     bool help(TreeNode* root,TreeNode *mini=NULL,TreeNode * maxi=NULL) {
        if(!root)   return 1;
        if(mini&& root->val <= mini->val)
        {
           return 0;
        }
       if(maxi&& root->val >= maxi->val)
        {
           return 0;
        }
       
         return help(root->left,mini,root)&& help(root->right,root,maxi);
        
           
            
        }
    
};