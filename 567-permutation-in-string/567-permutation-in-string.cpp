class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.length();
        int n2=s2.length();
        if(n1>n2)
            return 0;
        vector<int>v(26,0);
        for(auto &x:s1){
            v[x-'a']++;
        }
        
        vector<int>vcopy(26,0);
        for(int j=0;j<n1;j++){
                vcopy[s2[j]-'a']++;
        }
        
        for(int i=0;i<n2-n1+1;i++){
            if(v==vcopy)
            return 1;
            if(i==n2-n1)
                break;
            vcopy[s2[i]-'a']--;
            vcopy[s2[i+n1]-'a']++;
            
        }
        return 0;
    }
};