
class Solution {
public:
    Node* connect(Node* root) {
        fun(root);
        return root;
    }
    void fun(Node *r){
        if(!r)
            return;
        if(r->left)
            r->left->next=r->right;
        if(r->right&&r->next)
            r->right->next=r->next->left;
        fun(r->left);
        fun(r->right);
    }
};