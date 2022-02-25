class Solution {
public:
    int solve(vector<int>&p,int &lm,int &cnt,int &i,int &j){
        if(i>j)
            return cnt;
        if(i==j){
            return ++cnt;
        }
        cnt++;
        if(p[i]+p[j]>lm){
            j--;
            return solve(p,lm,cnt,i,j);
        }
        else if(p[i]+p[j]<=lm){
            i++;
            j--;
            return solve(p,lm,cnt,i,j);
        }
        return 0;
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