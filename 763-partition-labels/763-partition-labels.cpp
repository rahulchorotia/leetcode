class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        int n=s.size();
       vector<int>v;
        map<char,pair<int,int>>mp;
        for(int i=0;i<s.size();i++){
            pair<int,int>p;
            if(mp.find(s[i])!=mp.end())
                mp[s[i]]={i,i};
            else
                mp[s[i]]={mp[s[i]].first,i};
        }
        int i=0,j=mp[s[0]].second;
        int st=0;
        while(j<s.size()){
            if(i==j)
            {
                v.push_back(mp[s[i]].second-st+1);
                st=j+1;
                i=j+1;
                if(i>=n)
                    break;
                j=mp[s[i]].second;
                continue;
            }
            if(mp[s[i]].second>j)
            {
                j=mp[s[i]].second;
                
            }
            i++;
            
        }
        return v;
    }
};