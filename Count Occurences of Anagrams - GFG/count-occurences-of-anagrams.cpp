// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int i=0,j=0;
        int sum=0,N;
        N = txt.size();
        //cout<<j<<" ";
        vector<int> pm(26,0);
        vector<int> tm(26,0);
        for(auto i: pat){
            pm[i-'a']++;
        }
        int K = pat.size();
        while(j<N&& i<N){
            //cout<<j<<" ";
            tm[txt[j]-'a']++;
            if(j-i+1 == K){
                if(tm == pm){
                 sum++;   
                }
                tm[txt[i]-'a']--;
                i++;j++;
            }
            else if (j-i+1<K){
                
                j++;
            }
        }
        return sum;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends