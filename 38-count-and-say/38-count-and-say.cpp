class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string l=(countAndSay(n-1));
       map<char,int>mp;
        mp[l[0]]++;
        string res="";
        for(int i=1;i<l.size();i++){
            if(l[i]!=l[i-1]){
                string cstr=to_string(mp[l[i-1]]);
                //string num=to_string(l[i-1]);
                res=res+cstr+l[i-1];
                mp.erase(l[i-1]);
            }
            
            mp[l[i]]++;
            if(i==l.size()-1){
                string cstr=to_string(mp[l[i]]);
               // string num=to_string(l[i]);
                res=res+cstr+l[i];
                mp.erase(l[i]);
            }
           
        } 
        
        if(l.size()==1){
                 string cstr=to_string(mp[l[0]]);
                
                res=res+cstr+l[0];
                mp.erase(l[0]);
            }
        
        return res;
       
    }
};