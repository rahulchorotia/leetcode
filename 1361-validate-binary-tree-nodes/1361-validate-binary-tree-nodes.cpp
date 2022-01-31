class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& l, vector<int>& r) {
        vector<bool>v(n,0);
        queue<int>q;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[l[i]]++;
            mp[r[i]]++;
        }
        int ind=0;
        for(int i=0;i<n;i++){
           if(mp[i]==0)
               ind=i;
        }
        cout<<ind;
        q.push(ind);
        v[ind]=1;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            if(l[x]!=-1){
                if(v[l[x]]==1)
                    return 0;
                q.push(l[x]);
                v[l[x]]=1;
            }
            if(r[x]!=-1){
                 if(v[r[x]]==1)
                    return 0;
                q.push(r[x]);
                v[r[x]]=1;
            }
            
        }
        for(int i=0;i<n;i++)
            {
                if(v[i]==0)
                    return 0;
            }
        return 1;
    }
};