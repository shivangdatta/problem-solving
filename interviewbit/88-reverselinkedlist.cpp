/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    ListNode* p = A;
    ListNode* c = A->next;
    ListNode* n = NULL;
    if (A->next != NULL) n = A->next->next;
    p->next = NULL;

    while (c != NULL) {
        c->next = p;
        p = c;
        if (n != NULL) {
            c = n;
            if (n->next != NULL) n = n->next;
            else n = NULL;
        } else {
            c = NULL;
        }
    }

    return p;  // Return the new head of the reversed list
}



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
        if(head == NULL || head -> next == NULL) return head;
        ListNode * p = head;
        ListNode * c = head->next;
        ListNode * n = head->next->next;

        p->next = NULL;
        while(c!=NULL){
            c->next = p;
            p = c;
            c = n;
            if(n != NULL )n = n->next;
        }
        return p;
    }
};
