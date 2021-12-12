class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
        vector<int>dpp(n+1);
        
        dpp[0]=0;
        dpp[1]=0;
        for(int i=2;i<=n;i++)
        {
            dpp[i]=min(dpp[i-1]+cost[i-1],dpp[i-2]+cost[i-2]);
        }
        return dpp[n];
    }
};