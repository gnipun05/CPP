/* This is an Efficient Solution */
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
    if(head==NULL)
    {
        cout << "Linked list is Empty" << endl;
        return ;
    }

    Node *curr = head;
    while(curr!=NULL)    
    {
        cout << curr->data << " ";
        curr=curr->next;
    }
    cout << endl;
}

void findMiddle(Node* head)
{
    if(head==NULL)
    {
        cout << "NULL" << endl;
        return ;
    }

    Node *fast = head, *slow = head;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    cout << slow->data << endl;

    return ;
}

int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    cout << "For Linked List: "<< endl;
    display(head);

    cout << "Middle element is:" << endl;
    findMiddle(head);

    return 0;
}