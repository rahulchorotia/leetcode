// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int jump= l+(r-l)/2;
            
            if(isBadVersion(jump))
                r=jump-1;
            else
                l=jump+1;
        }
        return l;
    }
};