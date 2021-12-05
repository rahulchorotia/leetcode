class Solution {
public:
    int maxArea(vector<int>& h) 
    {
        int i=0,j=h.size()-1;
        int curr,g;
        while(i<j)
        {
            curr=min(h[i],h[j])*(j-i);
            if(curr>g)
            {
                g=curr;
            }
            if(h[i]>h[j])
            {
                j--;
            }
            else
                i++;
        }
            return g;
    }
};