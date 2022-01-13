/* A Program to Reverse a Linked List in Groups of size K Recursively */
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void display(Node *head)
{  
    if(head==NULL)
    {
        cout << "Linked list is Empty" << endl;
        return ;
    }

    Node *curr = head;
    while(curr!=NULL)    
    {
        cout << curr->data << " ";
        curr=curr->next;
    }
    cout << endl;
}

Node* reverseK(Node* head, int k)
{
    Node* prev=NULL, *curr=head, *next=NULL;
    int count=0;
    while(curr!=NULL && count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL) // or curr!=NULL  (Same thing)
    {
        Node* rest_head=reverseK(next,k);
        head->next=rest_head; /* as head of original list would now be at end of k reversed elements, it 
        will point to the new head of next k reversed elements */
    }
    return prev;
}

int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    Node *temp = new Node(50);
    head->next->next->next->next = temp;
    temp->next = new Node(60);
    temp->next->next = new Node(70);
    temp->next->next->next = new Node(80);
    
    cout << "Initial Linked List: "<< endl;
    display(head);

    cout << "New Reversed Linked list" << endl;
    head=reverseK(head,3);
    display(head);

    return 0;
}