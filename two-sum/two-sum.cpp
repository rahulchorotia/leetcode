class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int>mp;
        for(int i = 0;i<nums.size();i++)
        {
            //pair <int,int> pp;
            //pp={nums[i],i};
            //mp.insert(pp);
            mp[nums[i]]=i;
        }
        vector<int> ans(2);
        vector<int>nums2=nums;
        sort(nums2.begin(),nums2.end());
        int j=nums2.size()-1;
        int i=0;
       while(i<j)
        {
            if(nums2[i]+nums2[j]==target)
            {
                auto it = find(nums.begin(), nums.end(), nums2[i]);
                int index1 = it - nums.begin();
             
                auto it1 = find(nums.begin(), nums.end(), nums2[j]);
                int index2 = it1 - nums.begin();
                if(index1==index2)
                {
                    // nums[index1]=-88888;
                    // auto it2 = find(nums.begin(), nums.end(), nums2[j]);
                    // index2 = it2 - nums.begin();
                    index2=mp[nums[index1]];
                }
                ans[0]=index1;
                ans[1]=index2;
                return ans;
            }
            else if(nums2[i]+nums2[j]>target) 
            {
                j--;
                
            }
            else
                i++;
        }
         return ans;
    }
   
};