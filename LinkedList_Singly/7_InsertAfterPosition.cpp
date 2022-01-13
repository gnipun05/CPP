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
Node* insertNodetoaPosition(Node *head, int a, int pos);

Node *insertNodetoaPosition(Node *head, int val, int pos)
{
    Node* newNode = new Node(val);
    if(pos == 1) // Corner Case
    {
        newNode->next=head;
        return newNode;
    }

    Node *temp = head;
    for(int i=1; i<=pos-2 && temp!=NULL; i++)
    {
        temp = temp -> next;
    }

    if(temp == NULL)
        return head;

    newNode->next=temp->next;
    temp->next=newNode;

    return head; // Value of head is same as that it was passed as Argument Initially
}

void display(Node *head)
{
    Node *temp=head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp= temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head = insertNodetoaPosition(head, 908, 3);

    display(head);

    return 0;
}