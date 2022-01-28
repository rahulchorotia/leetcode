class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        vector<int>ans(n,INT_MAX);
        int mini=INT_MIN;
        int r=INT_MAX;
        for(int i=0;i<n;i++){
            if(seats[i]==1){
                r=0;
                ans[i]=0;
            }
            else{
                if(r<INT_MAX)
                 r++;
            }
            ans[i]=min(ans[i],r);
        }
        for(int i=n-1;i>=0;i--){
            if(seats[i]==1){
                r=0;
            }
            else
                r++;
            ans[i]=min(ans[i],r);
            mini=max(mini,ans[i]);
        }
        return mini;
    }
};