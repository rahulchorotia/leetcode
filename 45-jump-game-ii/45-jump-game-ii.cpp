class Solution {
public:
     int solve(int *arr,int k,int n){
      if(k==0)
        return 0;
      int index=-1;
      for(int i=0;i<k;i++){
          if(arr[i]>=(k-i))
          {
              index=i;
              break;
          }
      }
      
      if(index == -1)
        return -1;
        int dis = solve(arr,index,n);
        if(dis ==-1)
        return -1;
        return 1+dis;
  }
    int jump(vector<int>& nums) 
    {
        int n=nums.size();
       int arr[n];
        for(int i=0;i<nums.size();i++)
            arr[i]=nums[i];
        return solve(arr,n-1,n);
        
    }
        
    };
// 0 1 2 3 4
// 2 3 1 1 4