// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        /*
        int c=0;
        int i=0,j=0;
        unordered_map<int,int>mp;
        int mini=INT_MIN;
        while(j<s.length()){
            if(s[j]=='(')
            {
                c++;
                if(c>=0){
                    if(mp.find(c)!=mp.end()){
                        mini=max(mini,j-mp[c]);
                    }
                    else
                    mp[c]=j;
                }
                if(c==0){
                    mini=max(mini,j-i+1);
                }
            }
            if(s[j]==')'){
                c--;
                if(c<0)
                   {
                      while(c<0){
                          if(s[i]=='(')
                          c--;
                          else
                          c++;
                          i++;
                      }
                   }
                   if(c>=0){
                    if(mp.find(c)!=mp.end()){
                        mini=max(mini,j-mp[c]);
                    }
                    else
                    mp[c]=j;
                }
                   if(c==0){
                    mini=max(mini,j-i+1);
                }
                   
            }j++;
        }
        
        return mini==INT_MIN?0:mini;
        */
        int maxlen = 0;
        stack<char> st;
        int temp = 0;
        for(auto it : s){
            
            if(it == '(')
                st.push(it);
            else if(it == ')'){
                if(!st.empty()){
                    temp += 2;
                    st.pop();
                }
                else{
                    
                    temp = 0;
                }
            }
            
            if(st.empty()){
                maxlen = max(maxlen,temp);
            }
        }
        while(!st.empty())
            st.pop();
        temp = 0;
        for(int i = s.size()-1 ;i >= 0;i--){
            if(s[i] == ')')
                st.push(s[i]);
            else if(s[i] == '('){
                if(!st.empty()){
                    temp += 2;
                    st.pop();
                }
                else{
                    temp = 0;
                }
            }
            
            if(st.empty()){
                maxlen = max(maxlen,temp);
            }
        }
        return maxlen;
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends