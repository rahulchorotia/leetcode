class Solution {
public:
   void  solve(vector<int>&p,int &lm,int &cnt,int &i,int &j){
        if(i>j)
            return ;
        if(i==j){
                ++cnt;
            return;
        }
        cnt++;
        if(p[i]+p[j]>lm){
            j--;
                solve(p,lm,cnt,i,j);
            return; 
        }
        else if(p[i]+p[j]<=lm){
            i++;
            j--;
                solve(p,lm,cnt,i,j);
            return; 
        }
        return ;
    }
    int numRescueBoats(vector<int>& people, int limit) {
        int cnt=0;
        sort(people.begin(),people.end());
        int n=people.size()-1;
        int i=0;
        solve(people,limit,cnt,i,n);
        return cnt;
    }
};