class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int mul=1,c=0;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                c++;
            else
                mul*=nums[i];
        }
        if(c>=2)
            return ans;
        if(c==1)
        {
            for(int i=0;i<n;i++)
            {
                if(nums[i]==0)
                {
                    ans[i]=mul;
                }
                else
                    ans[i]=0;
            }
            return ans;
        }
        for(int i=0;i<n;i++)
            ans[i]=mul/nums[i];
        return ans;
            
    }
};