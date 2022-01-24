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
    int findTilt(TreeNode* root) {
        if(!root)
            return 0;
        stack<TreeNode *>st;
        st.push(root);
        int maxi=0;
        while(!st.empty()){
            if(root->left){
                st.push(root->left);
                root=root->left;
            }
            else{
                TreeNode *rr=st.top();
                int t=abs(sum(rr->left)-sum(rr->right));
               
                maxi=maxi+t;
                st.pop();
                if(rr->right){
                    st.push(rr->right);
                    root=rr->right;
                }
                         
            }
        }
        return maxi;
    }
    int sum(TreeNode *r){
        if(!r)
            return 0;
        return r->val+sum(r->left)+sum(r->right);
    }
};