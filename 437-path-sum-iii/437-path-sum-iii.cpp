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
    int c=0;
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)return 0;
        stack<TreeNode *>st;
        st.push(root);
        while(!st.empty()){
            TreeNode *temp=st.top();
            fun(temp,targetSum);
            st.pop();
            if(temp->left)
                st.push(temp->left);
            if(temp->right)
                st.push(temp->right);
        }
        return c;
    }
    void fun(TreeNode * r,int t){
        if(!r)return;
        if(t-r->val==0)
            c++;
        fun(r->left,t-r->val);
        fun(r->right,t-r->val);
    }
};