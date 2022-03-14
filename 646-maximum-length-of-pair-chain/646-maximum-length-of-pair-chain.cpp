class Solution {
public:
   static bool campare(vector<int>&a,vector<int>&b){
        return a[0]<b[0];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n  = pairs.size();
        sort(pairs.begin(),pairs.end(),campare);
      vector<int>dp(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(pairs[i][0]>pairs[j][1])
                {
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(dp[i]>ans)
                ans = dp[i];
            
        }
        return ans;
    }
};