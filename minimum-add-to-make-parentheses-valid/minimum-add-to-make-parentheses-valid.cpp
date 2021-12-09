class Solution {
public:
    int minAddToMakeValid(string s)
    {
     stack<char>st;
        int ans=0;
        for(auto &x:s)
        {
            if(x=='(')
            {
                st.push('(');
            }
            else if(x==')'&&st.empty()==true)
            {
                ans++;
            }
            else if(x==')'&&st.empty()==false)
            {
                st.pop();
            }
               
        }
        while(!st.empty())
        {
            ans++;
            st.pop();
        }
        return ans;
    }
};