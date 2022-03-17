// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
        long long leftmax=arr[0];
        long long rightmax=arr[n-1];
        long long ans[n]={0};
        for(int i=1;i<n-1;i++){
            if(arr[i]<leftmax){
                ans[i]=leftmax-arr[i];
            }
            else{
                ans[i]=0;
                leftmax=arr[i];
            }
            //cout<<i<<" "<<ans[i]<<" ;";
        }
        for(int i=n-2;i>0;i--){
            if(arr[i]<rightmax){
                ans[i]=min(ans[i],rightmax-arr[i]);
            }
            else{
                ans[i]=0;
                rightmax=arr[i];
            }
        }
        long long res=0;
        for(int i=0;i<n;i++){
            res+=ans[i];
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends