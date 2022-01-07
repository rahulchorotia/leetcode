class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int len = nums.size()/3;
        unordered_map<int,int> c;
        
        for(auto x : nums){
            ++c[x];
        }
        for(auto e:c){
            if(e.second > len)ans.push_back(e.first);
        }
    return ans;
    }
};