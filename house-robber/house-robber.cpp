class Solution {
public:
    int fun(vector<int>&nums,int ind,int f, vector<vector<int>>&dp)
    {
        if(nums.size()==ind)
        {
            return 0;
        }
        if(dp[f][ind]!=-1)
        {
            return dp[f][ind];
        }
        
        else if(f==1)
        {
            
            return dp[f][ind]=max(nums[ind]+fun(nums,ind+1,0,dp),fun(nums,ind+1,1,dp));
        }
        else
        {
           return dp[f][ind]=fun(nums,ind+1,1,dp);
        }
    }
    int rob(vector<int>& nums) 
    {
        
        vector<vector<int>>dp(2,vector<int>(nums.size(),-1));
        
         return fun(nums,0,1,dp);  
    }
};