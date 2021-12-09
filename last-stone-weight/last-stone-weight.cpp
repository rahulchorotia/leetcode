class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto &x:stones)
        {
            pq.push(x);
        }
     int size=stones.size();
        while(size>1)
        {
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            //cout<<x<<" "<<y<<endl;
            if(x==y)
            {
                size-=2;
                continue;
            }
                
            else if(x!=y)
            {
                pq.push(y-x);
                size--;
            }
                
        }
        if(size<=0)
        {
            return 0;
        }
        int v=pq.top();
        return v;
    }
};