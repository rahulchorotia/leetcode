// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  vector<vector<long long>>dp;
 long long solve(int *s,int ind,int sum,int m){
      if(ind==m){
          if(sum==0)
          {
              return dp[ind][sum]=1;
          }
          return 0;
      }
      if(sum<0)
        return 0;
        if(dp[ind][sum] != -1)
            return dp[ind][sum];
            
      if(s[ind]<=sum){
          return dp[ind][sum]=solve(s,ind,sum-s[ind],m)+solve(s,ind+1,sum,m);
      }
      else
        return dp[ind][sum]=solve(s,ind+1,sum,m);
  }
    long long int count(int S[], int m, int n) {

        // code here.
        dp.resize(m+1,vector<long long>(n+1,-1));
       return solve(S,0,n,m);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends