/* This is a Naive solution to Insert a Node at the Beginning of linked list */
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void display(Node *head)
{
    if(head==NULL)
        cout << "List is Empty" << endl;

    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr=curr->next;
    } while (curr!=head);
}

Node *insertAtBeginning(Node* head, int val)
{
    Node *temp=new Node(val);
    Node *curr=head;
    if(head==NULL)
        return temp;

    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return temp;
}

int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next ->next = new Node(40);

    head -> next -> next ->next -> next = head; // linking next of last Node to the initial Node of List

    cout << "Initial List" << endl;
    display(head);

    head = insertAtBeginning(head, 56);

    cout << "Final List " << endl;
    display(head);

    return 0;
}