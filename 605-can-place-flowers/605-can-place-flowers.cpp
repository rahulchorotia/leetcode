class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        for(int i=0;i<nums.size();i+=2){
            if(nums[i]==0&&nums[i+1<=nums.size()-1?i+1:i]==0&&nums[i-1>=0?i-1:i]==0)
            {
                nums[i]=1;
                n--;
            }
        }
        int sz=nums.size()-1;
        if(nums.size()%2==0)
        {
            if(nums[sz]==0&&nums[sz-1>=0?sz-1:sz]==0)
                n--;
        }
        if(n<=0)
            return 1;
        return 0;
    }
};