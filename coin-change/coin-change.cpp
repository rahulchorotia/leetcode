class Solution {
public:
    int coinChange(vector<int>& coins, int amount)
    {
      int n=amount;
      vector<int> dp(n+1,n+1);
        dp[0]=0;
        for(int i=1;i<=n;i++)
        {
          
            for(auto &x:coins)
            {
                if(x<=i)
                dp[i]=min(dp[i],1+dp[i-x]);
            }
         
        }
        return dp[n]>=n+1?-1:dp[n];
    }
};