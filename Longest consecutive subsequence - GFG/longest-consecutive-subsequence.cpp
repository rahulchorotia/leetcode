// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_map<int,int>mp;
      for(int i=0;i<N;i++){
          mp[arr[i]]=i;
      }
     
      int ans=0;
      for(int i=0;i<N;i++){
         int f1=1;
         int cnt1=1;
         int ele=arr[i];
         if(mp.find(ele-cnt1)==mp.end()){
         while(f1 ){
                 if(mp.find(ele+cnt1)!=mp.end()){
                    
                     cnt1++;
                    
                 }
                 else
                    f1=0;
             }
             
             
         }
         ans=max(ans,cnt1);
      }
      return ans;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends