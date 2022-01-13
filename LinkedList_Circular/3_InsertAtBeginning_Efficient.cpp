/* This is an Efficient solution to Insert a Node at the Beginning of linked list */
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
    cout << endl;
}

Node *insertAtBeginning(Node* head, int val)
{
    Node *temp=new Node(val);
    int v;

    if(head==NULL)
        return temp;

    temp->next=head->next;
    head->next=temp;

    v=head->data;
    head->data=temp->data;
    temp->data=v;

    return head;
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