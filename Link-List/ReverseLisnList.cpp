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
        ListNode *t1 = NULL;
        ListNode *t2 = head;
        while(t2!=NULL){
            t2=t2->next;
            head->next = t1;
            t1=head;
            head= t2;
        }
        head = t1;
        return head;

        
    }
};