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
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>>ans;
        queue<TreeNode*>q;
        vector<TreeNode*>temp;
         vector<int>temp1;
        if(!root)
            return ans;
        q.push(root);
        while(!q.empty())
        {
           
            int n=q.size();
           while(n--)
           {
               TreeNode *x=q.front();
               temp1.push_back(x->val);
               q.pop();
               if(x->left != NULL)
                    q.push(x->left);
                if(x->right !=NULL)
                    q.push(x->right);
           }
            ans.push_back(temp1); 
            temp1.clear();
        }
        return ans;
    }
};