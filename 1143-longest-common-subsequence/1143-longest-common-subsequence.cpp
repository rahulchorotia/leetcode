class Solution {
public:

    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size()+1,vector<int>(text2.size()+1,-1));
        return solve(text1,text2,text1.size(),text2.size(),dp);
    }
    int solve(string &s,string &b,int n, int m, vector<vector<int>> &dp){
        
        if(n==0||m==0)
            return 0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(s[n-1]==b[m-1]){
            int x=solve(s,b,n-1,m-1,dp);
             dp[n-1][m-1]=x;
            return dp[n][m]=1+x;
        }
        else{
            int l=solve(s,b,n-1,m,dp);
            dp[n-1][m]=l;
            int r=solve(s,b,n,m-1,dp);
             dp[n][m-1]=r;
            dp[n][m]=max(l,r);
            return dp[n][m];
        }
    }
};