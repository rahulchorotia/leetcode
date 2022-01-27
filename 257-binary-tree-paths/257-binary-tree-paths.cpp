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
     vector<string>ans;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root)   return ans;
        string s=to_string(root->val);
        if(isleaf(root))
           {
               ans.push_back(s);
               return ans;
           }
        fun(root->left,s);
        fun(root->right,s);
        return ans;
    }
    bool isleaf(TreeNode *r){
        if(!r->left&&!r->right)
            return 1;
        return 0;
    }
    int coundtdigit(int d){
        if(d<0)
        {
            return 1+coundtdigit(abs(d));
        }
        if(d<10)
            return 1;
        return 1+ coundtdigit(d/10);
    }
    void fun(TreeNode *r,string &s){
        if(!r)  return;
        s+="->";
        s+=to_string(r->val);
        if(isleaf(r))
            ans.push_back(s);
        fun(r->left,s);
        fun(r->right,s);
        int n=coundtdigit(r->val);
        while(n--)
        s.pop_back();
        s.pop_back();
        s.pop_back();
        
    }
};