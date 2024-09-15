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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* current = dummyNode;
        
        while( l1!=NULL && l2!=NULL)
        {
                
        if (l1->val <= l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    // If one of the lists has remaining elements, add them
    if (l1 != nullptr) {
        current->next = l1;
    } else {
        current->next = l2;
    }

    // Return the merged list starting from the first actual node (next to dummy)
    return dummyNode->next;
}
        
    
};