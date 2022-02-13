class Solution {
public:
    int ans;
    void solve(int n,int im,int k){
        int ne=pow(2,n-1);
        if(ne==1){
            ans=im;
            return;
        }
        if(k>ne/2){
            if(im==0){
                solve(n-1,1,k-ne/2);
            }
            if(im==1){
                solve(n-1,0,k-ne/2);
            }
                
        }
        if(k<=ne/2){
            if(im==0){
                solve(n-1,0,k);
            }
            if(im==1){
                solve(n-1,1,k);
            }
                
        }
    }
    int kthGrammar(int n, int k) {
        solve(n,0,k);
            return ans;
    }
};