class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n= nums.size();
        if(nums[0]==target)
            return 0; 
        int l=0,r=n-1;
        while(l<r)
        {
            if(nums[l]==target)
                return l;
            if(nums[r]==target)
                return r; 
            int mid=r-l/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return -1;
    }
};