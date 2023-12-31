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
