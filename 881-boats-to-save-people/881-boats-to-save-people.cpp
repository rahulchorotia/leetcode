class Solution {
public:
    int solve(vector<int>&p,int lm,int cnt,int i,int j){
        if(i>j)
            return cnt;
        if(i==j){
            return cnt+1;
        }
        if(p[i]+p[j]>lm){
            return solve(p,lm,cnt+1,i,j-1);
        }
        else if(p[i]+p[j]<=lm){
            return solve(p,lm,cnt+1,i+1,j-1);
        }
        return 0;
    }
    int numRescueBoats(vector<int>& people, int limit) {
        int cnt=0;
        sort(people.begin(),people.end());
       cnt= solve(people,limit,cnt,0,people.size()-1);
        return cnt;
    }
};