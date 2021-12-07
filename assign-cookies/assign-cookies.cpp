class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        int c=0;
        int n= g.size();
        sort(g.begin(),g.end());
         sort(s.begin(),s.end());
        int x=0;
        int j=x;
        for(int i=0;i<n;i++)
        {
            for( j=x;j<s.size();j++)
            {
                 if(s[j]>=g[i])
                 {
                    x=j+1;
                     c++;
                     break;
                 }
            }
           if(j==s.size())
               break;
        }
        return c;
    }
};