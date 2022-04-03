// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string ,int>mp;
        string max1="";
        string ans="";
        int x1=0,x2=0;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            
        }
        for( auto &x :mp){
            if(x.second > x1){
                    x2 =x1;
                    ans = max1;
                    x1=x.second;
                    max1=x.first;
                }
            else if(x.second > x2){
                    x2 = x.second;
                    ans = x.first;
                }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends