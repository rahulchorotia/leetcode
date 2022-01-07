class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> c ;
        int len = nums.size()/2;
        
        
        for(auto x: nums){
            c[x]++;
            if(c[x]>len)
                return x;
        }
        return 0;
    }
};