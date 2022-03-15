// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
//   int solve(int *arr,int k,int n){
//       if(k==0)
//         return 0;
//       int index=-1;
//       for(int i=0;i<k;i++){
//           if(arr[i]>=(k-i))
//           {
//               index=i;
//               break;
//           }
//       }
      
//       if(index == -1)
//         return -1;
//         int dis = solve(arr,index,n);
//         if(dis ==-1)
//         return -1;
//         return 1+dis;
//   }
    int minJumps(int arr[], int n){
        // Your code here
    //   return  solve(arr,n-1,n);
        if(n == 1)
            return 0;
        int curr_max = 0;
        //int max_ind = 0;
        int i = 0;
        int step = 0;
        
        while(i < n){
            
            step++;
            if(arr[i] + i >= n-1)
                return step;
            if(arr[i] == 0)
                return -1;
            curr_max = i+1;
            int w = 0;
            for(int j = i+1 ; j <= arr[i]+i;j++){
                if(arr[j] != 0 && arr[curr_max] <= arr[j]+w){
                    curr_max = j;
                    w = 0;
                }
               w++;
            }
            i = curr_max;
        }
        return step;
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