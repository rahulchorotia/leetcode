class Solution {
public:
    static bool compare(vector<int>a , vector<int>b)
    {
        return a[1]<b[1];
        
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        // vector<pair<int,int>>p;
         int n = pairs.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<2;j++)
        //         p.push_back({pairs[i][0],pairs[i][1]});
        // }
        sort(pairs.begin(),pairs.end(),compare);
        int ans =1;
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(pairs[i][0]>pairs[j][1])
            {
                j=i;
                ans++;
            }
         }
      
        return ans;
        
        
    }
};