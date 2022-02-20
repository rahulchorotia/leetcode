class Solution {
public:
    map<vector<int>,int> s;
    void hello(int i, vector<int> d, vector<vector<int>> &ans,vector<int>& nums,int n)
    {
        if(i==n)
        {
            //sort(d.begin(),d.end());
            if(s[d]==0)
            {
            ans.push_back(d);
                s[d]=1;
            }
            return ;
        }
        hello(i+1,d,ans,nums,n);
        d.push_back(nums[i]);
        hello(i+1,d,ans,nums,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size();
        vector<vector<int>> ans;
        vector<int> d;
        hello(i,d,ans,nums,j);
        return ans;
    }
   
};