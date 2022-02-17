class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>pv(26,0);
        vector<int>sv(26,0);
        int n1=s.size(),n2=p.size();
        if(n2>n1)
            return ans;
        for(auto &x:p){
            pv[x-'a']++;
        }
        int i=0;
        for(;i<n2;i++){
            sv[s[i]-'a']++;
        }
        if(pv==sv)
            ans.push_back(i-n2);
        for(;i<n1;i++){
            sv[s[i-n2]-'a']--;
            sv[s[i]-'a']++;
            if(pv==sv)
            ans.push_back(i-n2+1);
        }
        return ans;
    }
};