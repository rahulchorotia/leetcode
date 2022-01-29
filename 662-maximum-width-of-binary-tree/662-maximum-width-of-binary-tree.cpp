
class Solution {
public:
    typedef unsigned long long int ull;
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        map<ull,pair<ull,ull>> mp; //lvl , max-min
       
        dfs(root,0,mp,1);
        ull maxx = 0;
       for(auto &x:mp){
           ull temp=x.second.second-x.second.first+1;
          
          if(maxx<temp)
              maxx=temp;
       }
        return maxx;
        
    }
    
    void dfs(TreeNode* root, ull lvl , map<ull,pair<ull,ull>>& mp,ull h){
        if(!root)return;
         if(mp.find(h)!=mp.end()){
            mp[h].first=min(mp[h].first,lvl);
            mp[h].second=max(mp[h].second,lvl);
        }
        else
            mp[h]=make_pair(lvl,lvl);
        dfs(root->left,lvl*2,mp,h+1);
        dfs(root->right,lvl*2+1,mp,h+1);
       
    }
    
    
    
    
};