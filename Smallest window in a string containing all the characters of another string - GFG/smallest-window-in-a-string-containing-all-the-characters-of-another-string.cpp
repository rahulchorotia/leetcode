// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
         int  n = s.size();
        int y = p.size();
        if(n < y)
            return "-1";
        unordered_map<char,int> m;
        for(auto it : p){
            m[it]++;
        }
        int k = m.size();
        int ws = INT_MAX;
        int index = -1;
        int i = 0 , j = 1;
        int count = 0;
        unordered_map<char,int> temp;
        if(m[s[i]] > 0){
            temp[s[i]]++;
            if(temp[s[i]] == m[s[i]])
                count++;
        }
        while(j <= n && i <= j ){
            if(count < k){
                if(j < n && m[s[j]] > 0){
                    temp[s[j]]++;
                    if(temp[s[j]] == m[s[j]])
                        count++;
                }
                j++;
            }
            else{
                if(ws > j-i){
                    ws = j-i;
                    index = i;
                    if(ws == y){
                        return s.substr(index,ws);
                    }
                }
                if(m[s[i]] > 0){
                    temp[s[i]]--;
                    if(temp[s[i]] < m[s[i]])
                        count--;
                }
                i++;
            }
        }
        if(index == -1){
            return "-1";
        }
        return s.substr(index,ws);
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends