class Solution {
public:
    int fun(vector<int>& nums, vector<int>& mv,int s,int e,int m,vector<vector<int>>&dp)
    {
        if(m==mv.size())
        {
            return 1;
        }
        if(s>e)
            return 0;
        if(dp[s][m]!=-1)
            return dp[s][m];
        return dp[s][m]=max(nums[s]*mv[m]+fun(nums,mv,s+1,e,m+1,dp),nums[e]*mv[m]+fun(nums,mv,s,e-1,m+1,dp));
    }
    int maximumScore(vector<int>& nums, vector<int>& mv) 
    {
        
 vector<vector<int>>dp(mv.size(),vector<int>((mv.size()),-1));
       return fun(nums,mv,0,nums.size()-1,0,dp)-1;
    }
};

