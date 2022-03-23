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
unordered_map<string ,int>mp;
vector<vector<int>>dp;
bool check(string &A, vector <string> &B,int i,int j){
    if(i<0)
            return 0;
        if(j>=A.size())
            return 0;
            if(i>j)
                return 0;
        string s="";
        for(int l=i;l<=j;l++){
            s+=A[l];
        }
    if(mp[s])
        return 1;
        return 0;
}
    bool solve(string &A,vector<string> &B,int i,int j){
        if(i<0)
            return 0;
        if(j>=A.size())
            return 0;
            if(i>j)
                return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(check(A,B,i,j))
            return dp[i][j] = 1;
        for( int l = i+1;l<=j;l++){
            int a=0,b=0;
            a = solve(A,B,i,l-1);
            if(a)
                b =solve(A,B,l,j);
            if(b)
                return dp[i][j] = 1;
        }
        return dp[i][j] = 0;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        for(auto &x:B){
            mp[x]++;
        }
        dp.resize(A.size()+1,vector<int>(A.size()+1,-1));
        return solve(A,B,0,A.size()-1);
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