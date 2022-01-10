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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
       int num=0;
        ListNode *temp=NULL,*head=NULL;
        while(l1&&l2)
        {
            int sum=l1->val+l2->val+num;
            if(sum>=10)
            {
                num=sum/10;
                sum=sum%10;
            }
             else
                num=0;
            ListNode *newnode= new ListNode(sum);
            if(temp==NULL){
                temp=newnode;
                head=temp;
            }
            else{
                temp->next=newnode;
                temp=temp->next;
            }
               
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            int sum=l1->val+num;
            if(sum>=10)
            {
                num=sum/10;
                sum=sum%10;
            }
            else
                num=0;
             ListNode *newnode= new ListNode(sum);
             temp->next=newnode;
             temp=temp->next;
            l1=l1->next;
        }
         while(l2!=NULL)
        {
            int sum=l2->val+num;
            if(sum>=10)
            {
                num=sum/10;
                sum=sum%10;
            }
            else
                num=0;
             ListNode *newnode= new ListNode(sum);
             temp->next=newnode;
             temp=temp->next;
            l2=l2->next;
        }
        if(num!=0)
        {
            ListNode *newnode= new ListNode(num);
             temp->next=newnode;
             temp=temp->next;
        }

        return head;
    }
};