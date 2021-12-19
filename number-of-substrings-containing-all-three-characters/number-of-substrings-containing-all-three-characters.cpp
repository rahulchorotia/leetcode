class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0,x=0,sum=0;
        int n=s.length();
        int ac=0,bc=0,cc=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='a')
                ac++;
            if(s[i]=='b')
                bc++;
            if(s[i]=='c')
                cc++;
            if(ac>=1&&bc>=1&&cc>=1)
            { 
                cout<<j<<" "<<i<<endl;
                while(s[x]==s[j])
                {
                    x++;
                }
                sum+=(n-i)*(x-j);
                cout<<" s "<<sum<<endl;
                if(s[x-1]=='a') 
                    ac=ac-(x-j);
                if(s[x-1]=='b')
                    bc=bc-(x-j);
                if(s[x-1]=='c')
                    cc=cc-(x-j);
                j=x;
                if(i-j+1>=3&&ac>=1&&bc>=1&&cc>=1)
                {
                    if(s[i]=='a')
                        ac--;
                    if(s[i]=='b')
                        bc--;
                    if(s[i]=='c')
                        cc--;
                    i--;
                }
                else if(i+1==n&&i-j+1>=3)
                {
                    if(s[i]=='a')
                        ac--;
                    if(s[i]=='b')
                        bc--;
                    if(s[i]=='c')
                        cc--;
                    i--;
                }                
            }
        }
        
        return sum;
    }
};