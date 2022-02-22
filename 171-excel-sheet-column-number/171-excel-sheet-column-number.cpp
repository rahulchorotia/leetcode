class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        if(n==1)
            return columnTitle[0] - 'A'+1;
        long long int ans= 0;
        
        for(int i=n-1,j=0;i>=0;i--,j++){
            ans=ans+pow(26,j)*(columnTitle[i] - 'A'+1);
             
        }
        return ans;
    }
};