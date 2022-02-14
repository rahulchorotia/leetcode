// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	long long count=0;
	int f=0;
	  vector<long long>dp;
	
	void solve(string &str,int s,int e){
	    if(f)return;
	    if(dp[s]!=-1){
	        count+=dp[s];
	        count=count%(1000000007);
	        return;
	    }
        if(s>e){   count++;  count=count%(1000000007);
        return;}
        	   if(str[s]=='0')return;
	    if((e-s+1)>=2){
	       
	        string ss="";
            ss+=str[s];
            ss+=str[s+1];
            if(stoi(ss)==0){
                 count=0;
                        f=1;
                        return;
            }
            if(stoi(ss)<27)
                {
                    if(ss!="10"&&ss!="20")
                        solve(str,s+1,e);
                    solve(str,s+2,e);
                    dp[s]=count%(1000000007);
                }
            else{
                if(str[s+1]=='0')
                    {
                        count=0;
                        f=1;
                        return;
                    }
                   solve(str,s+1,e); 
                    dp[s]=count%(1000000007);
            }
	    }
	    else{
	        solve(str,s+1,e);
	         dp[s]=count%(1000000007);
	    }
	    
	   
	}
		int CountWays(string str){
		    // Code here
		    if(str[0]=='0')
		    return 0;
		    
		    for(int i=0;i<str.length()+1;i++){
		        dp.push_back(-1);
		    }
		    solve(str,0,str.size()-1);
		  //  cout<<"endl";
		  //  for(auto&x:dp){
		  //      cout<<" // "<<x<<" ";
		  //  }
		    int tcount=count%(1000000007);
		    count=0;
		    return tcount;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends