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
    TreeNode * t;
     int solve(TreeNode *r){
        if(!r)return 0;
        
        int ll=solve(r->left);
        int rr=solve(r->right);
        return ll+rr+1;
    } 
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        t=find(root,x);
        int lc=solve(t->left);
        int rc=solve(t->right);
        int nc=n-(lc+rc+1);
        int maxi=max(lc,max(rc,nc));
        if(maxi>(lc+rc))
            return 1;
        if(maxi>(rc+nc))
            return 1;
        if(maxi>(lc+nc))
            return 1;
       return 0; 
    }
    TreeNode* find(TreeNode *r,int &x){
        if(!r)return NULL;
        if(r->val==x)
            return r;
        TreeNode *ll=find(r->left,x);
        TreeNode *rr=find(r->right,x);
        return ll?ll:rr;
    } 
};