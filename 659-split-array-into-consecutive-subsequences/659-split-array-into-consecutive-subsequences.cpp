class Solution {
public:
    bool isPossible(vector<int>& nums) {
        map<int,int> mp;
        for(auto it : nums)
            mp[it]++;
        unordered_map<int,int> mp1;
        while(mp.size() > 0){
            auto it = mp.begin();
            int x = it->first;
            // cout<<x;
            if(mp[x] == 0)
                mp.erase(x);
            else if(mp1[x-1]){
                mp1[x-1]--;
                mp1[x]++;
                mp[x]--;
                if(mp[x] == 0)
                    mp.erase(x);
            }
            else if(mp[x+1] && mp[x+2]){
                mp[x]--;
                mp[x+1]--;
                mp[x+2]--;
                if(mp[x] == 0)
                    mp.erase(x);
                if(mp[x+1] == 0)
                    mp.erase(x+1);
                if(mp[x+2] == 0)
                    mp.erase(x+2);
                mp1[x+2]++;
            }
            else 
                return false;
        }
        return true;
    }
};