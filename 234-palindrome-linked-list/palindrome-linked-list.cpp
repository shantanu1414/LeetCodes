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
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast-> next -> next;
        }
        slow -> next = reverseList(slow->next);
        slow = slow -> next;

        while(slow!=NULL)
        {
            if(head -> val != slow -> val) return false;
            head = head->next;
            slow = slow -> next;
        }
        return true;

        
    }
    ListNode* reverseList(ListNode* head)
        {
            ListNode* prev = NULL;
            ListNode* current = head;
            ListNode* next = NULL;
            while(current != NULL)
            {
                next = current -> next;
                current -> next = prev;
                prev = current;
                current = next;
            }
            return prev;
        }
};