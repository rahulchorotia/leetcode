class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
          vector<int>dp(n+1);
         vector<int>dpp(n+1);
        dp[0]=0;
        dp[1]=cost[0];
        dpp[0]=0;
        dpp[1]=0;
        for(int i=2;i<=n;i++)
        {
            dp[i]=min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
            dpp[i]=min(dpp[i-1]+cost[i-1],dpp[i-2]+cost[i-2]);
        }
        return min(dp[n],dpp[n]);
    }
};