class Solution {
    
public:
    int mod=1000000007;
    int fun(int target,int ind,vector<int>&nums,int d,vector<vector<vector<int>>>&dp)
    {
        if(target==0&&d==0)
            return 1;
        if(d<0&&target<0)
            return 0;
        if(ind==nums.size()||d<0||target<0)
        {
            return 0;
        }
        if(dp[d][target][ind]!=-1)
            return dp[d][target][ind];
        if(nums[ind]<=target)
            return dp[d][target][ind]=(fun(target-nums[ind],0,nums,d-1,dp)%mod)+(fun(target,ind+1,nums,d,dp)%mod);
        return dp[d][target][ind]=fun(target,ind+1,nums,d,dp)%mod;
    }
    int numRollsToTarget(int d, int f, int target) 
    {
        vector<vector<vector<int>>>dp(d+1,vector<vector<int>>(target+1,vector<int>(f+1,-1)));
        vector<int>nums(f);
        for(int i=0;i<f;i++)
            nums[i]=i+1;
        return fun(target,0,nums,d,dp)%mod;
       
    }
};