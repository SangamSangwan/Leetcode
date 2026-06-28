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
        if(head==nullptr) return head;
        ListNode* count=head;
        int count1=0;
        
        while(count!=nullptr)
        {
            count = count->next;
            count1++;
        }
        for(int i=0;i<k%count1;i++)
        {
            ListNode* temp;
            ListNode* temp_prev = head;
            temp = head;
            while(temp->next !=nullptr)
            {
                temp_prev=temp;
                temp = temp->next;
            }
            temp->next = head;
            head=temp;
            temp_prev->next=nullptr;
        }
        return head;
    }
};