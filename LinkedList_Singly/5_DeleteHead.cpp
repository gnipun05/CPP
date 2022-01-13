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
        cout << "Linked List is empty" << endl;
        return;
    }
    Node *curr = head;
    while(curr!=NULL)    
    {
        cout << curr->data << endl;
        curr=curr->next;
    }
}

Node *deleteNodefromStarting(Node *head)
{
    if(head==NULL)
        return NULL;

    Node *newHead = head -> next;
    delete head; // delete keyword destroys the value present at the pointer
    return newHead;
}

int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    head = deleteNodefromStarting(head);

    display(head);
    return 0;
}