
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        if(!root)
            return 0;
        int maxi=INT_MIN;
            fun(root,maxi);   
        return maxi;
    }
    int fun(TreeNode *r,int& maxi){
        if(!r)
            return 0;
        int left=max(0,fun(r->left,maxi));
        int  right=max(0,fun(r->right,maxi));
        int value=r->val+left+right;
        maxi=max(maxi,value);
        return max(left,right)+r->val;
    }
};