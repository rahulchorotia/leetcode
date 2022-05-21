class Solution {
public:
    int Atmost(vector<int> &s, int k){
      if(k==0)  return 0;
      int i=0,j=0;
      unordered_map<int,int>mp;
      int count_of_sub=0;
      while(j<s.size()){
        mp[s[j]]++;
        if(mp.size()<=k){
            count_of_sub+=(j-i+1);
            j++;
        }
        else if(mp.size()>k){
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
            }
            if(mp.size()<=k){
            count_of_sub+=(j-i+1);
            j++;
            }
           
        }
        else
        j++;
          
      }
      //cout<<count_of_sub<<" "; 
      return count_of_sub;
  }
    
    int subarraysWithKDistinct(vector<int>& s, int k) {
    return Atmost(s,k)-Atmost(s,k-1);
    }
};