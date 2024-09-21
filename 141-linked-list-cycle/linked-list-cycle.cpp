class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false;  // No cycle if the list is empty or has only one node
        }

        // Initialize two pointers
        ListNode *slow = head;
        ListNode *fast = head->next;

        // Traverse the list with slow moving 1 step and fast moving 2 steps
        while (fast != NULL && fast->next != NULL) {
            if (slow == fast) {
                return true;  // If slow and fast meet, there is a cycle
            }
            slow = slow->next;          // Move slow pointer by 1 step
            fast = fast->next->next;    // Move fast pointer by 2 steps
        }

        return false;  // No cycle found
    }
};