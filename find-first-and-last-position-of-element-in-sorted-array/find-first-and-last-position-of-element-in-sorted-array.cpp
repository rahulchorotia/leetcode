class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,0);
        int s=0,e=nums.size()-1;
       
        int ind1=-1,ind2=-1,flag=1;
        int mid=-1;
        while(s<=e)
        {
            if(s==e)
            {
                if(nums[s]==target)
                {
                    if(ind1==-1)
                    {
                        ind1=s;
                    }
                    if(ind1>0)
                    {
                        if(s<ind1)
                            ind1=s;
                    }
                    if(ind2==-1)
                    {
                        ind2=s;
                    }
                    if(ind2>0)
                    {
                        if(s>ind2)
                            ind2=s;
                    }
                    break;
                }
            }
             mid=(s+(e-s)/2);
            
            
            if(nums[mid]==target)
            {
                ind1=mid;
                while(ind1>=0)
                {
                    if(nums[ind1]!=target)
                        break;
                    ind1--;
                }
                ind1++;
                ind2=mid;
                while(ind2<=nums.size()-1)
                {
                    if(nums[ind2]!=target)
                        break;
                    ind2++;
                }
                ind2--;
                flag=0;
                break;
            }
             
            
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        //cout<<ind1<<endl;
        //cout<<ind2<<endl;
        //cout<<mid<<endl;
        ans[0]=ind1;
        if(flag)
        ans[1]=max(ind2,-1);
        else
            ans[1]=max(ind2,mid);
        return ans;
    }
};