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
    void remove(ListNode* head, int &m) {
        if (head == NULL)
            return;

        remove(head->next, m);

        m--;

        // Delete the next node
        if (m == -1 && head->next != NULL) {
            head->next = head->next->next;
        }
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Dummy node helps when deleting the head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        int m = n;

        remove(dummy, m);

        return dummy->next;
    }
};