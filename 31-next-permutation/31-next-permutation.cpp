class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int s=-1,e=-1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])
            {
                s=i-1;
                e=i;
        
            }
        }
        cout<<s<<" "<<e<<endl;
        if(s==-1)
            sort(nums.begin(),nums.end());
        
        else{
            for(int i=e;i<n;i++){
                if(nums[i]>nums[s])
                    e=i;
            }
            swap(nums[s],nums[e]);
            reverse(nums.begin()+s+1,nums.end());
        }
    }
};