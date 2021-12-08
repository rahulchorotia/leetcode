class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n= nums1.size();
        //sort(nums1.begin(),nums1.end());//nlogn
         multiset<int> s(begin(nums1), end(nums1));
        int ind=0;
        for(int i=0;i<n;i++)//n
        {
            auto it=s.upper_bound(nums2[i]);//logn
        
            if(it!=s.end())
            {
                ans.push_back(*it);
                s.erase(it);//n
            }
            else
            {
                ans.push_back(*s.begin());
                s.erase(s.begin());
            }
        }
        return ans;
    }
};