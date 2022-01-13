/* Fuction to insert Node in the BEGINNING of a linked list is:
Node *insertNodeAtEnd(Node *head, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        return newNode;
    }

    Node *curr = head;
    while(curr -> next != NULL)
    {
        curr=curr->next;
    }
    curr -> next = newNode;
    return head;
}  */

#include <bits/stdc++.h>
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

void display(Node *head);
Node* insertNodeAtEnd(Node *head, int a);

Node *insertNodeAtEnd(Node *head, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL) // Corner Case
    {
        return newNode;
    }

    Node *curr = head;
    while(curr -> next != NULL) // we stop when we reach to a node whose next is NULL
    {
        curr=curr->next;
    }
    curr -> next = newNode;
    return head; // Value of head is same as that it was passed as Argument Initially
}

void display(Node *head)
{
    Node *curr=head;
    while(curr != NULL)
    {
        cout << curr -> data << " ";
        curr= curr->next;
    }
    cout << endl;
}

int main()
{
    // Node *head = new Node(10);
    // head -> next = new Node(20);
    // head -> next -> next = new Node(30);
    // head -> next -> next -> next = new Node(40);
    // head = insertNodeAtEnd(head, 908);

    Node *head = NULL;
    head = insertNodeAtEnd(head, 30);
    head = insertNodeAtEnd(head, 20);
    head = insertNodeAtEnd(head, 10);
    head = insertNodeAtEnd(head, 908);

    display(head);

    return 0;
}