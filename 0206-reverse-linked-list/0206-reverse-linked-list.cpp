class Solution {
public:
    ListNode* reverseList(ListNode* head) {
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