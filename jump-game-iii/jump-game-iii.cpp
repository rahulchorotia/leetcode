class Solution {
public:
    bool canReach(vector<int>& nums, int start) 
    {
        int n= nums.size();
        vector<bool> visited(n,false);
        
        return fun(visited,nums,start);
    }
    bool fun(vector<bool> &visited,vector<int> &nums,int ind)
    {
        if(ind<0||ind>=nums.size()||visited[ind]==true)
            return false;
        if(nums[ind]==0)
            return true;
        
        visited[ind]=true;
        return fun(visited,nums,ind+nums[ind])||fun(visited,nums,ind-nums[ind]);
    }
};