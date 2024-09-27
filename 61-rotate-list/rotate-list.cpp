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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* node =head;
        int count = 1;
        if(head == NULL || head->next==NULL || k == 0) return head;
        while(node->next!=NULL)
        {
            count++;
            node = node -> next;
        }
        node -> next = head;
        k = k % count;
        k = count - k;
        node -> next = head;
         while(k--)
         {
            node = node -> next;
         }
         head = node -> next;
         node -> next = NULL;

        return head;
    }
    
};