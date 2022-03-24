// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int k)
    {
        // Write Your Code here
        vector<int>ans;
        sort(candies,candies+N);
        int l=0;
        int r=N-1;
        int ans1 = 0;
        int ans2 = 0;
        while(l<=r){
            ans1+=candies[l];
            l++;
            r-=k;
        }
        ans.push_back(ans1);
        l=0;
        r=N-1;
        while(l<=r){
            ans2+=candies[r];
            r--;
            l+=k;
        }
        ans.push_back(ans2);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends