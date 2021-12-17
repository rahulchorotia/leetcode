class Solution {
public:
    int mod=1000000007;
    int fun(int ind,vector<int>&nums,int d,vector<vector<int>>&dp)
    {
        if(d==0)
            return 1;
        if(d<0)
            return 0;
        if(ind==nums.size()||d<0)
        {
            return 0;
        }
        if(dp[d][ind]!=-1)
            return dp[d][ind];
      
            return dp[d][ind]=(fun(ind,nums,d-1,dp)%mod)+(fun(ind+1,nums,d,dp)%mod);
       
    }
    int countVowelStrings(int n) 
    {
         vector<vector<int>>dp(n+1,vector<int>(5+1,-1));
        vector<int>nums(5);
        for(int i=0;i<5;i++)
            nums[i]=i+1;
        return fun(0,nums,n,dp)%mod;
    }
};