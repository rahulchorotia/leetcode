class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int>mp;
        vector<int>ans(2,0);
        for(int i=0;i<nums.size();i++)
        {
           if(mp.find(target-nums[i])!=mp.end()){
               ans[0]=i;
               ans[1]=mp[target-nums[i]];
           }
             else
                 mp.insert({nums[i],i});
        }
         return ans;
    }
   
};