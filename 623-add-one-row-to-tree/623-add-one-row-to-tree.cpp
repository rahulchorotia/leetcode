class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode *t=new TreeNode(val);
            t->left=root;
            return t;
        }
        queue<TreeNode *>q;
        q.push(root);
        int d=1;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
               TreeNode *t=q.front();
                q.pop();
                if(d==depth-1){
                    TreeNode *l=t->left;
                    TreeNode *r=t->right;
                    t->left=new TreeNode(val);
                    t->right=new TreeNode(val);
                    t->left->left=l;
                    t->right->right=r;
                }
                else{
                    if(t->left)     q.push(t->left);
                    if(t->right)    q.push(t->right);
                }
            }
            d++;
        }
        return root;
    }
};