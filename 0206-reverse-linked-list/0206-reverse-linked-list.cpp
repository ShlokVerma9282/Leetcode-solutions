class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        /*ListNode *NewHead = NULL;
        while(head!=NULL)
        {
            ListNode *next = head->next;
            head->next =NewHead;
            NewHead = head;
            head = next;
        }
        return NewHead;*/
        ListNode *prev =NULL,*temp=head;
        while(temp!=NULL)
        {
            ListNode* front = temp->next;
            temp->next = prev ;
            prev = temp;
            temp = front;
            
        }
        return prev;
    }
}; 