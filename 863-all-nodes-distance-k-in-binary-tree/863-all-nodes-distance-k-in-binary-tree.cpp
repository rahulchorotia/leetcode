/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
  unordered_map<TreeNode*,bool>vi;
class Solution {
public:
    vector<int> distanceK(TreeNode* r, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>mp;
        strptr(r,mp);
      
        TreeNode * t=target;
        queue<TreeNode*>q;
        q.push(t);
        vi[t]=1;
        int d=0;
        while(!q.empty())
        {
            
            int n=q.size();
            
            if(d==k)
            {
                break;    
            }
            while(n--)
            {
                 TreeNode *to=q.front();
                 q.pop();
               
                if(to->left)
                {
                    if(vi[to->left]==0)
                    {
                        q.push(to->left);
                        vi[to->left]=1;
                    }
                    
                }
                if(to->right)
                {
                    if(vi[to->right]==0)
                    {
                        q.push(to->right);
                        vi[to->right]=1;
                    }
                    
                }
                if(mp[to])
                {
                    if(vi[mp[to]]==0)
                    {
                        q.push(mp[to]);
                        vi[mp[to]]=1;
                    }
                    
                }
            }
            d++;
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
                          
    }
    void strptr(TreeNode* r,unordered_map<TreeNode *,TreeNode*>&mp){
        if(!r) return;
        vi[r]=0;
        if(r->left)
            mp[r->left]=r;
        if(r->right)
            mp[r->right]=r;
        strptr(r->left,mp);
        strptr(r->right,mp);
    }
};