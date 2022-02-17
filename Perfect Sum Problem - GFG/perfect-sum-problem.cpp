// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	
	int solve(int arr[],int n,int sum,int dsum,int i,int **dp,int c){
	    if(i>=n){
	        if(sum==dsum)
	        {
	            return (c+1)%1000000007;
	        }
	        return 0;
	    }
	    if(sum>dsum)
	    return 0;
	   if(dp[i][sum]!=-1)
	       return dp[i][sum]%1000000007;
	           
	   return dp[i][sum]=(solve(arr,n,sum+arr[i],dsum,i+1,dp,c)%1000000007)+(solve(arr,n,sum,dsum,i+1,dp,c)%1000000007)%1000000007;
	    
	   
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int** dp = new int*[n+1];
        for(int i=0;i<=n;i++)
        dp[i] =new int[sum+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                dp[i][j] = -1;
            }
        }
       
       return  solve(arr,n,0,sum,0,dp,0)%1000000007;
     
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends