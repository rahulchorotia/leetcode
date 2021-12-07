class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        if(nums.size()==1)
            return true;
        int n=nums.size(),temp=0;
        for(int i=0;i<n-1;i++)
        {
            if(i+nums[i]>=n-1)
                return true;
            if(nums[i]<=0&&i>=temp)
            {
                 return false;
            }
            if(nums[i]>0&&temp<i+nums[i])
            temp=nums[i]+i;
        }
        return true;
    }
};