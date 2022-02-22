class Solution {
public:
    int maxind(string ns){
        int ind=0;
        int maxi=INT_MIN;
        int i;
        for( i=1;i<ns.size();i++){
          if(ns[i-1]<ns[i])
              break;
        }
        if(i==ns.size())
        {
            return stoi(ns);
        }
        int index;
        //cout<<i<<":";
        for(int j=i;j<ns.size();j++){
             //cout<<j<<"*";
            if(maxi<=(ns[j]-'0'))
            {
                maxi=ns[j]-'0';
                index=j;
               
            }
        }
        char x=maxi+'0';
        //cout<<index<<":"<<maxi<<":"<<x<<":";
        for(int p=0;p<i;p++){
            if(ns[p]<x)
            {
                swap(ns[p],ns[index]);break;
            }   
                
        }
       return stoi(ns);
    }
    int maximumSwap(int num) {
        
        string ns = to_string(num);
        return maxind(ns);
       
    }
};