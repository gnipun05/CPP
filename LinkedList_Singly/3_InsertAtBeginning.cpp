/* Fuction to insert Node in the BEGINNING of a linked list is:
Node *insertNode(Node *head, int val)
{
    Node* newHead = new Node(val);
    newHead->next=head;
    return newHead;
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
Node* insertNode(Node *head, int a);


Node *insertNode(Node *head, int val)
{
    Node* newHead = new Node(val);
    newHead->next=head;
    return newHead;
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
    Node *head = NULL;
    head = insertNode(head, 30);
    head = insertNode(head, 20);
    head = insertNode(head, 10);

    display(head);

    return 0;
}