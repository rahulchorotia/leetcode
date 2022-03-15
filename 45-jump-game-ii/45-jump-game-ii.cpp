class Solution {
public:
  
    int jump(vector<int>& arr) 
    {
        int n = arr.size();
        if(n == 1)
            return 0;
        int curr_max = 0;
        //int max_ind = 0;
        int i = 0;
        int step = 0;
        
        while(i < n){
            
            step++;
            if(arr[i] + i >= n-1)
                return step;
            if(arr[i] == 0)
                return -1;
            curr_max = i+1;
            int w = 0;
            for(int j = i+1 ; j <= arr[i]+i;j++){
                if(arr[j] != 0 && arr[curr_max] <= arr[j]+w){
                    curr_max = j;
                    w = 0;
                }
                w++;
            }
            i = curr_max;
        }
        return step;
        
    }
        
    };
// 0 1 2 3 4
// 2 3 1 1 4