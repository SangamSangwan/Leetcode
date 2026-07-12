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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy =new ListNode(0);
        ListNode* ans = dummy;
        int sum=0;
        int carry=0;
        while(l1 != NULL && l2 !=NULL)
        {
            sum = l1->val + l2->val+carry;
            l1 = l1->next;
            l2 = l2->next;
            if(sum>9)
            {
                carry=1;
            }
            else
            {
                carry=0;
            }
            ans->next = new ListNode (sum%10);
            ans = ans->next;
        }
        if(l1 == NULL)
        {
            while(l2 !=NULL)
            {
                sum = l2->val+carry;
                carry = sum/10;
                ans->next = new ListNode (sum%10);
                l2 = l2->next;
                ans = ans->next;
            }
        }
        else
        {
            while(l1 !=NULL)
            {
                sum = l1->val+carry;
                carry = sum/10;
                ans->next = new ListNode (sum%10);
                l1 = l1->next;
                ans=ans->next;
            }
        }
        if(carry) ans->next = new ListNode(carry);
        return dummy->next;
    }
};