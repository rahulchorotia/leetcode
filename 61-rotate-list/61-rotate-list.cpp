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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* last=head,*brk,*h =head;
        int len=1;
        if(!head)return 0;
       
        
        while(last->next){
            last= last->next; //5
            len++;
        }
        k = k%len ;
         if(k==0)return head;
        if(len == 1)return head;
        int pos = len -k-1;
        
        while(pos--){
            h = h->next;
        }
        
        brk = h->next;
        h->next = NULL;
        last->next = head;
        return brk;
        
    }
};