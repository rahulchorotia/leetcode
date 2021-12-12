class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int n=triangle.size();//rows
        int m=triangle[n-1].size();//column
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                ans[i][j]=INT_MAX-1000;
        }
        ans[0][0]=triangle[0][0];
        for(int i=1;i<n;i++)
        {
           for(int j=0;j<triangle[i].size();j++)
           {
               ans[i][j]=triangle[i][j]+min( ans[i-1][max(0,j-1)],ans[i-1][j] );
               cout<<ans[i][j]<<" ";
           }
            cout<<endl;
        }
        
        return *min_element(ans[n-1].begin(),ans[n-1].end());
    }
};