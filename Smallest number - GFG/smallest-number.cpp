// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
        // code here 
        string str = "";
        if( D*9 < S) return "-1";
        for(int i=D ; i >= 2 ; i--){
             int k=9;
            while(k>=0){
                if(S-k >= 1){
                str+=to_string(k);
                S-=k;
                break;
                }
                k--;
            }
        }
        str+=to_string(S);
        reverse(str.begin(),str.end());
        return str;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends