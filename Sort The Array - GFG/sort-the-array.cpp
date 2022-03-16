// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
   vector<int> merge(vector<int>&arr,int low,int high){

    //cout<<low<<" "<<high<<"yes"<<endl;
        vector<int> v;
        if(low >high)
            return v;       
        if(low==high){
            v.push_back(arr[low]);
           // cout<<arr[low]<<" chutiya"<<endl;
            return v;
        }
        int mid=(low+high)/2;
        vector<int> left=merge(arr,low,mid);
        vector<int> right=merge(arr,mid+1,high);
        int i=0,j=0;
        while(i<left.size()&&j<right.size()){
            //cout<<"ghus gya"<<endl;
            if(left[i]<right[j]){
                v.push_back(left[i]);
                i++;
            }
            else{
                v.push_back(right[j]);
                j++;
            }
        }
        while(i<left.size()){
             v.push_back(left[i]);
                i++;
        }
        while(j<right.size()){
            v.push_back(right[j]);
                j++;
        }
        return v;
        
    }
    vector<int> sortArr(vector<int>arr, int n){
    //complete the function here
    return merge(arr,0,n-1);
    }
};

// { Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}

  // } Driver Code Ends