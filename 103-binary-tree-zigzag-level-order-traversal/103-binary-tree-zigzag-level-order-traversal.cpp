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
         vector<int>temp1;
        if(!root)
            return ans;
        q.push(root);
        int c=0;
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
           
            if(c%2==1){
                reverse(temp1.begin(),temp1.end());
            }
            ans.push_back(temp1); 
            temp1.clear();
            c++;
        }
        return ans;
    }
};