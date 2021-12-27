class Solution {
public:
    int firstUniqChar(string s) {
        int ans=INT_MAX;
        vector<int>v(27,0);
        stack<int>st;
        for(int i=s.length()-1;i>=0;i--)
        {
            v[s[i]-'a']++;
            if(v[s[i]-'a']==1){
                st.push(i);
               
            }
           
        }
        while(!st.empty())
        {
            int i=st.top();
            if(v[s[i]-'a']==1)
                return i;
            st.pop();
        }
    
        return -1;
    }
};