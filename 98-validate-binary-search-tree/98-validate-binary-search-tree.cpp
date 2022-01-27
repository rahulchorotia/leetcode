
class Solution {
public:
    bool isValidBST(TreeNode* root,TreeNode * mini=NULL,TreeNode *maxi=NULL) 
    {
        if(!root)
            return 1;
        if(mini && maxi)
        {
            if(root->val<=mini->val||root->val>=maxi->val)
                return 0;
             
              return isValidBST(root->left,mini,root)&&isValidBST(root->right,root,maxi);
        }
        if(mini&&!maxi)
        {
            if(root->val<=mini->val)
                return 0;
            else
                return isValidBST(root->left,mini,root)&&isValidBST(root->right,root,maxi);
        }
        if(!mini&&maxi){
            
            if(root->val>=maxi->val)
                return 0;
            else
                return isValidBST(root->left,mini,root)&&isValidBST(root->right,root,maxi);
        }
        if(!mini && !maxi)
            return isValidBST(root->left,mini,root)&&isValidBST(root->right,root,maxi);
       return 0;
    }
    
};