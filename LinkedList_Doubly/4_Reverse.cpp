#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev; // difference between the structure of a Doubly and Singly Linked List
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void display(Node* head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

Node *Reverse(Node *head)
{
    if(head == NULL || head->next == NULL) 
        return head;
    
    Node *temp=NULL, *curr=head;
    while(curr!=NULL)
    {
        temp=curr->prev; // its important to initialise temp with curr->prev only, and not curr->next
        curr->prev=curr->next;
        curr->next=temp;
        
        curr = curr->prev; // Notice prev here
    }
    return temp ->prev; // temp->prev is the new head of reversed Linked List
}

int main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);

    head -> next = temp1;
    temp1 -> prev = head;

    temp1 -> next = temp2;
    temp2 -> prev = temp1;
    
    cout << "Initial Linked List" << endl;
    display(head);

    head = Reverse(head);

    cout << "New Linked List" << endl;
    display(head);

    return 0;
}