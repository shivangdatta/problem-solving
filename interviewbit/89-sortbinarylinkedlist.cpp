/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    int size , zero ;
    ListNode * cur = A;
    while (cur != NULL){
        if(cur -> val == 0)  zero++ ;
        size++;
        cur = cur -> next;
    }
    cur = A;
    while( cur != NULL){
        if(zero > 0){
            cur -> val = 0;
            zero--;
        }
        else{
            cur -> val = 1;
        }
        cur = cur -> next;
    }
    return A;
}
