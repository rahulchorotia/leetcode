// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>ans;
	    vector<int>ans2;
	    int p=0;
	    int ng=n-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            ans.push_back(arr[i]);
	            
	        }
	        else{
	            ans2.push_back(arr[i]);
	        }
	    }
	    int j=0,k=0;
	    int n1=ans.size();
	    int n2=ans2.size();
	    
	    for(int i=0;i<n;i++){
	        if(n1==j||n2==k){
	            if(n1==j){
	                arr[i]=ans2[k];
	                k++;
	            }
	            else if(n2==k){
	                arr[i]=ans[j];
	                j++;
	            }
	            
	        }
	        else{
	            if(i%2)
	            {
	                arr[i]=ans2[k++];
	            }
	            else
	            arr[i]=ans[j++];
	        }
	    }
	   
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends