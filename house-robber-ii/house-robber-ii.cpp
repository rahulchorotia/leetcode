class Solution {
public:
    
    int rob(vector<int>& nums) 
    {
        if(nums.empty()) return 0;
        if(nums.size() == 1) return nums[0];
        vector<int> dp(nums.begin(), nums.end()-1);
        vector<int> dp2(nums.begin()+1, nums.end());
       return max(rob1(dp),rob1(dp2));
    }
    int rob1(vector<int>& nums) 
    {
        
        vector<int>dp(nums.size(),-1);
        int n=nums.size();
        if(n==1)
            return nums[0];
        dp[n-1]=nums[n-1];
        dp[n-2]=max(nums[n-1],nums[n-2]);
        for(int i=nums.size()-3;i>=0;i--)
        {
            dp[i]=max(nums[i]+dp[i+2],dp[i+1]);
        }
         return dp[0];  
    }
};