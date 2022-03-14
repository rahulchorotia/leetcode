class Solution {
public:
    static bool compare(vector<int>a , vector<int>b)
    {
        return a[1]<b[1];
        
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        sort(pairs.begin(),pairs.end(),compare);
        int ans =1;
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(pairs[j][1]<pairs[i][0])
            {
                j=i;
                ans++;
            }
         }
      
        return ans;
        
        
    }
};