// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
  int solve(int *arr,int k,int n){
      if(k==0)
        return 0;
      int index=-1;
      for(int i=0;i<k;i++){
          if(arr[i]>=(k-i))
          {
              index=i;
              break;
          }
      }
      
      if(index == -1)
        return -1;
        int dis = solve(arr,index,n);
        if(dis ==-1)
        return -1;
        return 1+dis;
  }
    int minJumps(int arr[], int n){
        // Your code here
      return  solve(arr,n-1,n);
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends