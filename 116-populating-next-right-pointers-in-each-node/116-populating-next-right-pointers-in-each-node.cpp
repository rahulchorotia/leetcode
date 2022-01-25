
class Solution {
public:
    Node* connect(Node* r) {
        if(!r)return NULL;
        r->left?r->left->next=r->right:NULL;
        r->right?r->right->next=(r->next)?r->next->left:NULL:NULL;
        connect(r->left);
        connect(r->right);
        return r;
    }
   
};