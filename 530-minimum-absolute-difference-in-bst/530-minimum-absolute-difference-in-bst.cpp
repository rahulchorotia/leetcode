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
    int getMinimumDifference(TreeNode* root) {
        int diff=INT_MAX;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode*r=st.top();
            st.pop();
            if(r->left)
           diff=min(diff,abs(pr(r->left)-r->val));
            if(r->right)
            diff=min(diff,abs(sr(r->right)-r->val));
         
           if(r->left) st.push(r->left);
            if(r->right) st.push(r->right);
        }
        return diff;
    }
    int pr(TreeNode*r){
        if(!r)
             return 0;
        if(r->right)
            r=r->right;
        else
            return r->val;
       return pr(r);
    }
     int sr(TreeNode*r){
         if(!r)
             return 0;
        if(r->left)
            r=r->left;
        else
            return r->val;
        return sr(r);
    }
    
};