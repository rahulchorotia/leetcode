class Solution {
public:
    vector<vector<int>>st;
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int> ans;
        
        fun(ans,nums,0);
       
        return st;
    }
    void fun(vector<int> &ans,vector<int>&nums,int i){
       
        
        if(i>=nums.size())
        {
            st.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        fun(ans,nums,i+1);
        ans.pop_back();
        fun(ans,nums,i+1);
        
    }
};