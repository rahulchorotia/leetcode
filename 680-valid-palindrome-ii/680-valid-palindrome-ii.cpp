class Solution {
public:
    int c=1;
    bool solve(string &s,int i,int j){
        if(i>j)
            return 1;
        if(i==j)
            return 1;
        if(s[i]==s[j])
            return solve(s,i+1,j-1);
        else
        {
            if(c==1){
                c=0;
                return solve(s,i,j-1)||solve(s,i+1,j);
                
            }
            else
                return 0;
        }
    }
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        return solve(s,i,j);
    }
};