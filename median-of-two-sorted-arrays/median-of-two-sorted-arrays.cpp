class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        multiset<int>ms;
        int i=0,j=0;
        int n=nums1.size();
        int m=nums2.size();
        int sz=n+m;
       
        int first= ((sz/2)-1);
        int sec=(sz/2);
        
        double f1=0;
        double f2=0;
        int count=0;
        while(i<n||j<m)
        {
            if(i<n&&j<m)
            {
                if(nums1[i]<=nums2[j])
                {
                    if(count==first)
                        f1=nums1[i];
                    if(count==sec)
                        f2=nums1[i];
                    i++;
                    count++;
                }
                else
                {
                    if(count==first)
                        f1=nums2[j];
                    if(count==sec)
                        f2=nums2[j];
                    j++;
                    count++;
                }
            }
            else if(i>=n)
            {
                while(j<m)
                {
                  if(count==first)
                        f1=nums2[j];
                    if(count==sec)
                        f2=nums2[j];
                   
                    j++;
                    count++;
                }
                
            }
            else if(j>=m)
            {
                while(i<n)
                {
                     if(count==first)
                        f1=nums1[i];
                    if(count==sec)
                        f2=nums1[i];
                    i++;
                    count++;
                }
            }
        }
        if(sz%2==0)
        {
            return ((f1+f2)/2);
        }
        else
            return (f2);
    }
};