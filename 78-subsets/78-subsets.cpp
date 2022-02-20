class Solution {
public:
    set<vector<int>>st;
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int> ans;
        vector<vector<int>>res;
        fun(ans,nums,0);
        for(auto &x:st){
            res.push_back(x);
        }
        return res;
    }
    void fun(vector<int> &ans,vector<int>&nums,int i){
       
        
        if(i>=nums.size())
        {
            st.insert(ans);
            return;
        }
        ans.push_back(nums[i]);
        fun(ans,nums,i+1);
        ans.pop_back();
        fun(ans,nums,i+1);
        
    }
};