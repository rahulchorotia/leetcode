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
        while(l1||l2||num)
        {
            int sum=0;
            if(l1 !=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2 !=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=num;
            
            num=sum/10;
            sum=sum%10;
            
             
            ListNode *newnode= new ListNode(sum);
            if(temp==NULL){
                temp=newnode;
                head=temp;
            }
            else{
                temp->next=newnode;
                temp=temp->next;
            }
               
        }
    
      

        return head;
    }
};