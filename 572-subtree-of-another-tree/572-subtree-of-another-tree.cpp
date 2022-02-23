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
    vector<int>s;
    bool f=0;
    void solve(TreeNode *r){
        if(!r){
            s.push_back(-1);
            return ;
        }
            
       
        solve(r->left);
        solve(r->right);
        s.push_back(r->val);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        solve(subRoot);
        fun(root);
        return f;
    }
    vector<int> fun(TreeNode *r){
        vector<int>ans;
        if(!r) {
            ans.push_back(-1);
            return ans;
        }
        vector<int> l=fun(r->left);
        vector<int> ri=fun(r->right);
        vector<int>tr;
        tr.insert(tr.end(),l.begin(),l.end());
        tr.insert(tr.end(),ri.begin(),ri.end());
        tr.push_back(r->val);
        if(tr==s)
        {
            f=1;
            return tr;
        }
        return tr;
    }
    
};