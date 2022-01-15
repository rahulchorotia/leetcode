/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        int n=0;
        ListNode *t=head,*prev=NULL;
        while(t){
            n++;
            t=t->next;
        }
        if(n<=2)
            return;
        t=head;
        
        for(int i=0;i<(n+1)/2;i++){
            prev=t;
            t=t->next;
        }
        ListNode *start=t,*d=NULL;
        
        while(t){
            ListNode *N=t->next;
            t->next=d;
            d=t;
            t=N;
        }
        prev->next=d;
        t=head;
        for(int i=0;i<n/2;i++){
            ListNode *N=t->next;
            t->next=d;
            d=d->next;
            prev=t->next;
            t->next->next=N;
            t=N;
        }
        if(n%2==0)
        prev->next=NULL;
        else
            prev->next->next=NULL;
    }
};