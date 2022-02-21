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
unordered_map<int,bool>dp;
    bool solve(string &A,int s){
        if(A.size()==s)
            return 1;
        if(dp.find(s)!=dp.end())
                return dp[s];
      bool a=0;string temp="";
      for(int i=s;i<A.length();i++){
          temp+=A[i];
          if(mp.find(temp)!=mp.end())
          {
             a= a|| solve(A,i+1);
          }
      }
      return dp[s]=a;
    }
    int wordBreak(string A, vector<string> &B) {
       for(int i=0;i<B.size();i++){
           mp[B[i]]++;
       }
        return solve(A,0);
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