class Solution {
public:
    map<int,int>dp;
    int climbStairs(int n) {
        
        return fun(n);
    }
    int fun(int n){
         if(dp[n])
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