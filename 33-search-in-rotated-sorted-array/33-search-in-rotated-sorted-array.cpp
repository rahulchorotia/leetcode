class Solution {
public:
    int sch(vector<int>& nums,int l,int r, int t){
        if(l==r)
        {
            if(nums[l] == t)
                return l;
        }
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == t)
                return mid;
            else if( t < nums[mid]){
               r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l =0;
        int r = nums.size()-1;
        int n = nums.size();
        if(n==1){
            if(nums[l] == target)
                return 0;
            return -1;
        }
        while(l<=r){
            
            int mid = l + (r-l)/2;
            //cout<<l<<" "<<r<<" "<<mid<<endl;
            //left half is sorted
            if(nums[mid] == target)
                return mid;
            if(nums[mid] >= nums[l]){
                int ans = sch(nums,l,mid,target);
                if(ans !=-1){
                    return ans;
                }
                l = mid+1;
            }
            else{
                int ans = sch(nums,mid+1,r,target);
                if(ans !=-1){
                    return ans;
                }
                r = mid;
            }
        }
        return -1;
    }
};