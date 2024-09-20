/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *l1 = headA;
        ListNode *l2 = headB;

        if(l1 == NULL || l2 == NULL) return NULL;

        while(l1!=l2)
        {
            l1 = l1 == NULL ? l1=headB : l1->next;
            l2 = l2 == NULL ? l2=headA : l2->next;
        }
        return l1;
    }
};