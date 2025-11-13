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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        ListNode *f =head;
        ListNode *s = head;
        while(f->next!=NULL && f->next->next!=NULL){
            f=f->next->next;
            s=s->next;
        }
        ListNode *h1 = s->next;
        ListNode *t1=NULL;
        ListNode *t2 = h1;
        while(t2!=NULL){
            t2 = t2->next;
            h1 ->next = t1;
            t1=h1;
            h1=t2;
        }
        h1= t1;
        s->next = h1;
        s=head;
        while(h1!=NULL){
            if(h1->val!=s->val)return false;
            h1=h1->next;
            s=s->next;
        }
        return true;


    }
};