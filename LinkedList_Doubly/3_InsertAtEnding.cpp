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
    Node *curr=head;
    while(curr!=NULL)
    {
        cout << curr->data << " ";
        curr=curr->next;
    }
    cout << endl;
}

Node * insertAtEnding(Node *head, int val)
{
    Node *temp = new Node(val);

    if(head == NULL)
        return temp;

    Node *curr = head;
    while(curr -> next != NULL)
        curr = curr->next;
    
    curr -> next = temp;
    temp -> prev = curr;

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

    head = insertAtEnding(head,56);

    cout << "New Linked List" << endl;
    display(head);

    return 0;
}