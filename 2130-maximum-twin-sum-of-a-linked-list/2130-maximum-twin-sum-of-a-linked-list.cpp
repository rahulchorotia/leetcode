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
    int pairSum(ListNode* head) {
        vector<int>v;
        ListNode *t=head;
        while(t)
        {
            v.push_back(t->val);
            t=t->next;
        }
        int n=v.size();
        int max=INT_MIN;
        for(int i=0;i<n/2;i++)
        {
            if(v[i]+v[n-1-i]>max)
                max=v[i]+v[n-1-i];
        }
        return max;
    }
};