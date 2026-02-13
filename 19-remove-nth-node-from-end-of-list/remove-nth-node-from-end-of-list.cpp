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
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        int n=0;
        ListNode*temp=head;
        while(temp){temp=temp->next;n++;}

if (k == n) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

    temp=head;
         k=n-k-1;
        while(k--){temp=temp->next;}

        ListNode*del=temp->next;

        temp->next=del->next;
        delete del;
        return head;
    }
};