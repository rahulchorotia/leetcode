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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode* temp = head->next->next;
        ListNode* h= head->next ,*prev = head , *next = head->next;
        
        while(head&&head->next){
         int v=head->val;
            head->val=head->next->val;
            head->next->val=v;
            head=head->next->next;
        }
        return prev;
        
    }
};