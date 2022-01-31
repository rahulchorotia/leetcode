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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        TreeNode * root=NULL;
        fun(root,nums);
        return root;
    }
 TreeNode *   fun(TreeNode * &root,vector<int>nums){
        int maxi=INT_MIN;
        int ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(maxi<nums[i])
            {
                maxi=nums[i];
                ind=i;
            }
            
        }
           
        if(maxi==INT_MIN)
            root=NULL;
        else
            root=new TreeNode(maxi);
       if(root){
           vector<int>l(nums.begin(),nums.begin()+ind);
        vector<int>r(nums.begin()+ind+1,nums.end());
     
       root->left= fun(root->left,l);
   
       root->right=fun(root->right,r);
       }
        
     return root;
    }
};