// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long ans=0;
    vector<long long> merge(vector<long long>&arr,long long low,long long high){

    //cout<<low<<" "<<high<<"yes"<<endl;
        vector<long long> v;
        if(low >high)
            return v;       
        if(low==high){
            v.push_back(arr[low]);
           // cout<<arr[low]<<" chutiya"<<endl;
            return v;
        }
        long long mid=(low+high)/2;
        vector<long long> left=merge(arr,low,mid);
        vector<long long> right=merge(arr,mid+1,high);
        long long i=0,j=0;
        while(i<left.size()&&j<right.size()){
            //cout<<"ghus gya"<<endl;
            if(left[i]<=right[j]){
                v.push_back(left[i]);
                i++;
            }
            else{
                ans+=left.size()-i;
                v.push_back(right[j]);
                j++;
            }
        }
        while(i!=left.size()){
             v.push_back(left[i]);
                i++;
        }
        while(j<right.size()){
            v.push_back(right[j]);
                j++;
        }
        return v;
        
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        vector<long long>a(arr,arr+N);
        merge(a,0,N-1);
        return ans;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends