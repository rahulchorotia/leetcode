// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int num_sum = S/7;
        int num_day_ava= S-num_sum;
        double total = num_day_ava * N;
        double total_req = M *S;
        if(total_req>total)
            return -1;
        double ans =(double)total_req/N;
        
        return ceil(ans);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}  // } Driver Code Ends