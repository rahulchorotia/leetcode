class Solution {
public:
    std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while(std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}
    bool wordPattern(string p, string s) {
        map<char,int>mp1;
        map<string,int>mp2;
        vector<string>s1;
            split(s,' ',s1);
        
        if(p.length()!=s1.size())
            return 0;
        for(int i=0;i<p.length();i++){
            
            if(mp1.find(p[i])!=mp1.end()&&mp2.find(s1[i])!=mp2.end())
            {
                if(mp1[p[i]]!=mp2[s1[i]])
                    return 0;
            } 
            else if(mp1.find(p[i])==mp1.end()&&mp2.find(s1[i])==mp2.end())
            {
                mp1[p[i]]=i;
                mp2[s1[i]]=i;
            }
            else
                return 0;
                
        }
        return 1;
    }
};