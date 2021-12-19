class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
     
        int n=nums.size();
        int j=0;
        int count=0,cl=0;
        int LK=k;
        queue<int>st;
        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                st.push(i);
                LK--;
                if(LK==-1)
                {
                   
                    LK++;
                    j=(st.front()+1);
                    st.pop();
                    
                }
            }
            count=max(count,i-j+1);
           // cout<<" "<<count<<endl;
        }
        //cout<<i<<" "<<j<<endl; 
        
        return count;
    }
};