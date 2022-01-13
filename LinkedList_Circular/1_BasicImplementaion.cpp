/* For a Singly Circular Linked List, structure will be same as that of a Singly linked list
For a Doubly Cicular Linked List, structure will be same as that of a Doubly linked list */

/* In Circular Linked List, next of last Node points to the 1st Node */

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

int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next ->next = new Node(40);

    head -> next -> next ->next -> next = head; // linking next of last Node to the initial Node of List

    display(head);

    return 0;
}