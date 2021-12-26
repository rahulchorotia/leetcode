class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size()-1;
        if(k>n+1)
            k=k%(n+1);
        if(n==0)
            return ;
        vector<int>temp;
        for(int i=n-k+1;i<=n;i++)
            temp.push_back(nums[i]);
        int cur=n;
        for(int i=n-k;i>=0;i--)
        {
            nums[cur]=nums[i];
            cur--;
        }
        for(int i = 0;i<k;i++)
            nums[i]=temp[i];
    }
};