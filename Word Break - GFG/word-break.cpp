// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
unordered_map<string,int>mp;
unordered_map<string,int>dp;
    bool solve(string A){
        if(A.size()==0)
            return 1;
            if(dp[A])
                return dp[A];
      bool a=0;string temp="";
      for(int i=0;i<A.length();i++){
          
          
          temp+=A[i];
          if(mp.find(temp)!=mp.end())
          {
             a= a|| solve(A.substr(i+1));
             
          }
      }
      return dp[A]=a;
    }
    int wordBreak(string A, vector<string> &B) {
       for(int i=0;i<B.size();i++){
           mp[B[i]]++;
       }
        return solve(A);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends