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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode *t=head,*t1=head;
        
        while(t)
        {
            t=t->next;
            c++;
        }
        if(c==n)
            return head->next;
        int pos=(c-n+1);
        c=0;
        while(t1)
        {
            c++;
            if(c==pos-1)
            {
                 t1->next=t1->next->next;
                return head;
            }
               
            t1=t1->next;
        }
        return head;
    }
};