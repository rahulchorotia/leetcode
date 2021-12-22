class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        
        return go(0,piles.size()-1,piles,0,0,0);
    }
    bool go(int s, int end,vector<int>& piles,int A,int B,int flag)
    {
        if(s==end)
            return (B+piles[s]<=A);
        //if(flag==0)
             return go(s+1,end,piles,A+piles[s],B,0)||go(s,end-1,piles,A+piles[end],B,0);
        //else
          //  return go(s+1,end,piles,A,B+piles[s],0)||go(s,end-1,piles,A,B+piles[end],0);
    }
};