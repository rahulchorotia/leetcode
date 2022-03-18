// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int>ans;
        ans.push_back(1);
        for(int i=2;i<=N;i++){
            int c=0;
            vector<int>temp;
            for(int j=0;j<ans.size();j++){
                int mul=ans[j]*i+c;
               
                if(j==ans.size()-1){
                    while(mul){
                        temp.push_back(mul%10);
                        mul=mul/10;
                    }
                }
                else{
                    temp.push_back(mul%10);
                    if(mul) c=mul/10;
                }
            }
            ans.clear();
            for(auto&x:temp){
                ans.push_back(x);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends