class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *NewHead = NULL;
        while(head!=NULL)
        {
            ListNode *next = head->next;
            head->next =NewHead;
            NewHead = head;
            head = next;
        }
        return NewHead;
    }
}; 