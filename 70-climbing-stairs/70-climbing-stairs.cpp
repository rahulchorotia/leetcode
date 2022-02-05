class Solution {
public:
    vector<int>dp;
    int climbStairs(int n) {
        dp.resize(n+1,0);
        return fun(n);
    }
    int fun(int n){
         if(dp[n]!=0)
            return dp[n];
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        dp[n]=fun(n-1)+fun(n-2);
        return dp[n];
    }
};