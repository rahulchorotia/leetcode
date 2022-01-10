/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ha = headA , *hb = headB ;
        
        
        while(ha){
            while(hb){
                if(ha == hb)return ha;
                hb = hb->next;
            }
            ha = ha->next;
            hb = headB;
        }
        
        return NULL;
    }
};