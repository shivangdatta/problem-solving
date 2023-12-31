/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int size1 = 0;
    int size2 = 0;

    ListNode* a1 = A;
    ListNode* b1 = B;

    // Count the size of both linked lists
    while (a1 != NULL) {
        size1++;
        a1 = a1->next;
    }

    while (b1 != NULL) {
        size2++;
        b1 = b1->next;
    }

    // Reset pointers to the beginning of the lists
    a1 = A;
    b1 = B;

    // Move pointers to the same starting point
    if (size1 > size2) {
        for (int i = 0; i < size1 - size2; ++i) {
            a1 = a1->next;
        }
    } else {
        for (int i = 0; i < size2 - size1; ++i) {
            b1 = b1->next;
        }
    }

    // Traverse until intersection or end of the lists
    while (a1 != NULL && b1 != NULL && a1 != b1) {
        a1 = a1->next;
        b1 = b1->next;
    }

    return (a1 == b1) ? a1 : NULL;  // Return intersection or NULL if there's no intersection
}
