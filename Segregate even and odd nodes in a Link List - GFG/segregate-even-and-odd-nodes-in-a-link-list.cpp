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
        cout << node->data <<" "; 
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
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *odd = new Node(0);
        Node *even = new Node(0);
        Node* temp1 = odd;
        Node* temp2 = even;
        Node* curr= head;
        Node * next=NULL;
        while(curr!=NULL)
        {
            if(curr->data%2==0)
            {
                temp2->next = curr;
                next = curr->next;
                curr->next = NULL;
                curr = next;
                temp2=temp2->next;
            }
            else
            {
               temp1->next = curr;
                next = curr->next;
                curr->next = NULL;
                curr = next; 
                temp1=temp1->next;
            }
            
        }
        temp2->next = odd->next;
        return even->next;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends