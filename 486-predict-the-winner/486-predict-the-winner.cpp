class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        return fun(nums,0,0,nums.size()-1,0,0);
    }
     bool fun(vector<int>& nums,bool f,int i,int j,int sum1,int sum2) {
        if(i>j)
        {
            if(sum1<sum2)
                return 0;
            return 1;
        }
         if(f==0){
           return fun(nums,1,i+1,j,sum1+nums[i],sum2)||
            fun(nums,1,i,j-1,sum1+nums[j],sum2);
        }
        if(f==1){
            
           return   fun(nums,0,i+1,j,sum1,sum2+nums[i])&&
                fun(nums,0,i,j-1,sum1,sum2+nums[j]);
        }
         return 1;
    }
};