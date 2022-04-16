// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	    void del(queue<char>&q,char x){
	        queue<char>q2;
            int len = q.size();
	        for(int i=0;i<len;i++){
	            if(q.front()!= x)
	                q2.push(q.front());
	            q.pop();
	        }
	        int len2 = q2.size();
	        for(int i=0;i<len2;i++){
	            q.push(q2.front());
	            q2.pop();
	        }
	    }
		string FirstNonRepeating(string A){
		    // Code here
		    queue<char>q;
		    unordered_map<char,int>mp;
		    string ans ="";
		    for(auto &x:A){
		        //new char
		        if(mp.find(x)==mp.end()){
		            mp[x]++;
		            q.push(x);
		            ans+=q.front();
		        }
		        else{
		            mp[x]++;
		            del(q,x);
		            if(q.empty())
		                ans+="#";
		            else
		            ans+=q.front();
		        }
		    }
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends