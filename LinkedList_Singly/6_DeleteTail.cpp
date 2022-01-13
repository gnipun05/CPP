#include <iostream>
#include <bits/stdc++.h>
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
    if(head == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }
    Node *curr = head;
    while(curr!=NULL)    
    {
        cout << curr->data << endl;
        curr=curr->next;
    }
}

Node *deleteNodefromEnding(Node *head)
{
    if(head==NULL)
        return NULL;

    else if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *present=head;
    while(present -> next -> next != NULL)
    {
        present=present->next;
    }
    delete present -> next;
    present -> next = NULL;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    head = deleteNodefromEnding(head);

    display(head);
    return 0;
}