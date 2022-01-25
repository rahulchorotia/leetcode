
class Solution {
public:
    Node* connect(Node* root) {
        fun(root);
        return root;
    }
    void fun(Node *r){
        if(!r)return;
        r->left?r->left->next=r->right:NULL;
        r->right?r->right->next=(r->next)?r->next->left:NULL:NULL;
        fun(r->left);
        fun(r->right);
    }
};