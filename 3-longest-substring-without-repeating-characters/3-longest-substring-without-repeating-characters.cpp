class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int j=0,i=0,ans=0;
        while(i<s.size() && j<s.size()){
            if(mp[s[j]]){
                mp[s[i]]--;
                i++;
            }
            else{
                mp[s[j++]]++;
                ans = max(ans,j-i);
            }
        }
        return ans;
    }
};