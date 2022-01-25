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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        vector<TreeNode*>temp;
    
        if(!root)
            return ans;
        q.push(root);
        bool c=0;
        while(!q.empty())
        {
           
            int n=q.size();
            vector<int>temp1(n);
           for(int i=0;i<n;i++)
           {
               TreeNode *x=q.front();
                int index=0;
               if(c==0)
                 index =i;
               else
                    index=n-1-i;
               temp1[index]=x->val;
               q.pop();
               if(x->left != NULL)
                    q.push(x->left);
                if(x->right !=NULL)
                    q.push(x->right);
           }
           
            c=!c;
            ans.push_back(temp1); 
            temp1.clear();
           
        }
        return ans;
    }
};