class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int>pr;
        int n=nums.size();
        int s=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            s+=nums[i];
            pr.push_back(s);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(pr[i]==k)
                cnt++;
            if(mp[pr[i]-k])
                cnt+=mp[pr[i]-k];
            
            mp[pr[i]]++;
        }
        return cnt;
    }
};