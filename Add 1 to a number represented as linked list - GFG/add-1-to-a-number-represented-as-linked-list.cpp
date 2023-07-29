//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
     Node* reverse(Node *head){
              if(head->next==NULL){
                  return head;
              }
            Node *prev=NULL,*curr=head,*nxt;
            while(curr!=NULL){
                nxt=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nxt;
            }
          return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        int sum,carry=0;
        Node *temp = reverse(head);
        Node*head1=temp,*prev=temp;
        while(head1!=NULL){
            if(head1==temp){
                sum= head1->data+1;
            }
        else{
            sum=head1->data+carry;
        } 
            if(sum==10){
                head1->data=0;
                carry=1;
            }
        else if(sum<=9){
              head1->data=sum;
              carry=0;
        }
        else if(sum>=11){
            head1->data=sum%10;
            carry= sum/10;
           }
           prev=head1;
           head1=head1->next;
        }
        Node *newnode = new Node(carry);
        if(carry>0){
            prev->next=newnode;
        }
         return reverse(temp);
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends