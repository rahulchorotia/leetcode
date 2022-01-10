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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
      //  ListNode *L=list1;
        ListNode* head =NULL;
        ListNode* curr=NULL;
       // ListNode *list3=&L;
        while(list1 &&list2)
        {
            ListNode* temp;
            if(list1->val>list2->val)
            {
                temp = new ListNode(list2->val);
                list2 = list2->next;
                
            }
            else
            {
                temp = new ListNode(list1->val);
                list1 = list1->next;
            }
            if(head==NULL)
            {
                head = temp;
                curr = head;
            }
            else
            {
                curr->next = temp;
                curr = curr->next;
            }
                
            
                
            
        }
        if(list1)
            curr->next = list1;
        if(list2)
            curr->next  = list2;
        return head ;
    }
};