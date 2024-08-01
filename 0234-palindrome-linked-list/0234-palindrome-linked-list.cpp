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
    ListNode* reverse(ListNode* head) {
        ListNode *temp = head;
        ListNode *prev = NULL;
        while(temp)
        {
            ListNode *front = temp->next;
            temp->next = prev;
            prev =temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow =head;
        ListNode* fast =head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=reverse(slow);
        while(slow)
        {
            if(head->val!=slow->val)
            {
                return false;
            }
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};