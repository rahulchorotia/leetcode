class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int i=0,j=0;
        unordered_map<int,int>mp;
        int sum =0;
        int ans=0;
        while(j<nums.size()){
            
            if(nums[j]==0)
                sum-=1;
            else
                sum+=1;
         //   cout<<sum<<" ";
            if(mp.find(sum) != mp.end()){
                int ind2 = j;
                int ind1 = mp[sum]+1;
                ans = max(ans,ind2-ind1+1);
                //cout << ans<<" ";
            }
            else if(sum==0){
                ans=max(ans,j-i+1);
            }
            else{
                mp[sum]=j;
            }
            j++;
        }
        return ans;
    }
};