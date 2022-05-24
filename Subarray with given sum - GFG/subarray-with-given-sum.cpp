// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int i=0,j=0;
        long long sum =0;
        vector<int> ans;
        int ii=-1,jj=-1;
        while(j<n){
            sum+=arr[j];
            if(sum < s){
                j++;
            }
            else if(sum ==s)
            {
                ii=i;
                jj=j;
                break;
            }
            else{
                while(sum > s){
                    sum-=arr[i];
                    i++;
                }
                if(sum ==s)
                {
                ii=i;
                jj=j;
                break;
                }
            j++;
            }
            
        }
        if(ii==-1||jj==-1){
            ans.push_back(-1);
            return ans;
        }
            
        ans.push_back(ii+1);
        ans.push_back(jj+1);
        
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends