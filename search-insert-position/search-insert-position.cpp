class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int jump= l+(r-l)/2;
            if(nums[jump]==target)
                return jump;
            if(nums[jump]<target)
            {
                 l=jump+1;
            }
            else
                r=jump-1;
            // if(l==jump-1)
            //     return l+1;
            // if(r==jump+1)
            //     return r-1;
            
        }
        return l;
    }
};