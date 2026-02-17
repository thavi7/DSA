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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode*temp1=l1,*temp2=l2;

       while(temp1 && temp2)
       {
        temp1->val= temp1->val+temp2->val;
        if(temp1->val > 9)
        {
           temp1->val=temp1->val%10;

        if(temp1->next)
            temp1->next->val += 1;
        else
            temp1->next = new ListNode(1);
        }
        temp1=temp1->next;
        temp2=temp2->next;
       
       }

        while(temp1)
        {
            if(temp1->val > 9)
    {
        temp1->val %= 10;

        if(temp1->next)
            temp1->next->val += 1;
        else
            temp1->next = new ListNode(1);
    }
    temp1 = temp1->next;
        }

        if(temp2)
{
    ListNode* t = l1;
    while(t->next) t = t->next;
    t->next = temp2;
}



       return l1;
    }
};