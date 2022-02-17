class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(auto &x:nums){
           ans=ans^x;
           
        }
        
        return ans;
    }
};