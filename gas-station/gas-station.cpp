class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n= gas.size();
        int start=0;
        for(int i=0;i<n;i++)
        {
            if(gas[i]>=cost[i])
            {
                start=i;
                int curr=start;
                int tank=gas[start];
                int next=-1,f=1;
                while(next!=start)
                {
                    
                    if(curr+1>n-1)
                        next=0;
                    else next=curr+1;
                  
                    if(tank-cost[curr]<=0)
                        break;
                    tank = tank -cost[curr]+gas[next];
                   
                    curr=next;
                }
                int prev=0;
                if(next-1<0)
                    prev=n-1;
                else
                    prev=next-1;
                if(next==start&&tank-cost[prev]>=0)
                    return next;
            }
        }
      
        
        return -1;
    }
};