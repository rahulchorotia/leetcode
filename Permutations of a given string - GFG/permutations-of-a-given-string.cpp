// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    vector<string> ans;
	    void solve(string &S,unordered_map<char,int>&mp,int i,string t){
	        if(i==S.size()){
	            ans.push_back(t);
	            return ;
	        }
	        for(auto &x:mp){
	            if(x.second>0)
	            {
	                string nt;
	                nt=t+x.first;
	                x.second--;
	                solve(S,mp,i+1,nt);
	                
	                x.second++;
	            }
	        }
	    }
	    
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    unordered_map<char,int>mp;
		    for(auto & x: S){
		        mp[x]++;
		    }
		    solve( S,mp,0,"");
		    sort(ans.begin(),ans.end());
		    return ans;
		    
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends