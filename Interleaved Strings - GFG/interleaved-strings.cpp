// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    bool solve(string A, string B, string C,int i,int j,int k, vector<vector<int>>&dp)
    {
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(k==C.length())
        return dp[i][j]=1;
        if(i<A.length()&&A[i]==C[k]){
            if(solve(A,B,C,i+1,j,k+1,dp))
                return dp[i][j]=1;
            else if(j<B.length()&&B[j]==C[k])
            {
                if(solve(A,B,C,i,j+1,k+1,dp))
                return dp[i][j]=1;
                
            }
            return dp[i][j]=0;
        }
        if(j<B.length()&&B[j]==C[k])
            {
                if(solve(A,B,C,i,j+1,k+1,dp))
                return dp[i][j]=1;
                return dp[i][j]=0;
                
            }
            return dp[i][j]=0;
    }
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        int n=A.length();
        int m= B.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(A,B,C,0,0,0,dp);
    }

};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		Solution obj;
		cout<<obj.isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}  // } Driver Code Ends