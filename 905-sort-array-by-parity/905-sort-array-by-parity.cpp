class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n-1;
        while( i < j )
        {
            if( nums[j]%2 == 0 ){
               while(i<j){
                   swap(nums[j],nums[i]);
                   i++;
                   if(nums[j]%2==1)
                   {
                       j--;
                       break;
                   }
               } 
            }
            else
            j--;
        }
        return nums;
    }
};