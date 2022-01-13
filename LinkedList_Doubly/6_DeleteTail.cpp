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
    if(head==NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    Node *curr=head;
    while(curr!=NULL)
    {
        cout << curr->data << " ";
        curr=curr->next;
    }
    cout << endl;
}

Node * deleteTail(Node *head)
{
    Node *temp=head->next;

    if(head == NULL)
    return NULL;

    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }

    while(temp->next != NULL)
    {
        temp=temp->next;
    }

    temp->prev->next=NULL;
    delete temp;

    return head;
}

int main()
{
    Node *head=new Node(10);
    Node *curr1=new Node(20);
    Node *curr2=new Node(30);

    head -> next = curr1;
    curr1 -> prev = head;

    curr1 -> next = curr2;
    curr2 -> prev = curr1;
    
    cout << "Initial Linked List" << endl;
    display(head);

    head = deleteTail(head);

    cout << "New Linked List" << endl;
    display(head);

    return 0;
}