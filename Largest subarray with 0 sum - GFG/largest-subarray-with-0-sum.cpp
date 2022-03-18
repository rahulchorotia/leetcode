// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mp;
        vector<int>pr;
        int s=0;
        for(int i=0;i<n;i++){
            s+=A[i];
            pr.push_back(s);
            mp[pr[i]]=i;
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(mp.find(pr[i])!=mp.end()){
                if(mp[pr[i]]!=i){
                    ans = max(ans,mp[pr[i]]-i);
                }
            }
            if(pr[i]==0){
                ans=max(ans,i+1);
            }
        }
        return ans==-2147483648?0:ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends