// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	vector<vector<int>>dp;
	bool solve(int n, int x, int y,int f){
	    if(n==0 && f==1)
	        return 1;
	    if(n==0 && f==0)
	        return 0;
	    if(n<0&& f==1)
	        return 0;
	    if(n<0&& f==0)
	        return 1;
	    if(dp[n][f] != -1)
	        return dp[n][f];
	    if(f==0){
	        return dp[n][f] = (solve(n-x,x,y,1)||solve(n-y,x,y,1)||solve(n-1,x,y,1));
	    }
	    else{
	        int a =1;
	        int b=1;
	        int c=1;
	        if(n-x>=0){
	            a=solve(n-x,x,y,0);
	        }
	        if(n-y>=0){
	            b=solve(n-y,x,y,0);
	        }
	        if(n-1>=0){
	            c=solve(n-1,x,y,0);
	        }
	        return dp[n][f] = (a &&b && c);
	    }
	}
	int findWinner(int N, int X, int Y)
	{
		// Your code goes here
		dp.resize(N+1,vector<int>(2,-1));
	    return 	solve(N,X,Y,0);
	}

};
	

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
       	int n, x, y;
       	cin >> n >> x >> y;

       

        Solution ob;
        cout << ob.findWinner(n, x, y);
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends