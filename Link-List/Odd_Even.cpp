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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL) return head;
        ListNode *temp = head;
        ListNode* b = temp->next;
        ListNode* c = temp->next;
        ListNode* n = c->next;
        while(c->next!=NULL){
            c->next = n->next;
            n->next = b;
            temp->next = n;
            c=c->next;
            if(c==NULL) break;
            n=c->next;
            temp=temp->next;
            b=temp->next;
        }
        return head;
    }
};