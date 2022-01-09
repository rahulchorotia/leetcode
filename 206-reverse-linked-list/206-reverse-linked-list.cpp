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
    ListNode* reverseList(ListNode* head) {
        ListNode *t1=head,*nex=head;
        ListNode *d=NULL;
        while(t1!=NULL)
        {
            nex=t1->next;
            t1->next=d;
            d=t1;
            t1=nex;
        }
        return d;
    }
};