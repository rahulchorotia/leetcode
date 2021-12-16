class Solution {
    private:
    
public:
    int fun(int target,vector<int>&nums,int ind, vector<vector<int>>&dp)
    {
        if(target==0)
            return 1;
        if(ind==nums.size()||target<0)
            return 0;
        if(dp[ind][target]!=-1)
            return dp[ind][target];
        if(nums[ind]<=target)
        return dp[ind][target]=max(fun(target-nums[ind],nums,ind+1,dp),fun(target,nums,ind+1,dp));
       else 
           return dp[ind][target]=fun(target,nums,ind+1,dp);
    }
    bool canPartition(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=0;
        for(int x:nums)
            sum+=x;
        if(sum%2==1)
            return false;
        int target=sum/2;
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        int y=fun(target,nums,0,dp);
        return y;
    }
};