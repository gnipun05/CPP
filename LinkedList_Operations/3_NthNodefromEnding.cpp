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

void nthFromEnding(Node* head, int pos)
{
    Node *first = head;
    for(int i=1; i<=pos; i++)
    {
        if(first==NULL)
        {
            cout <<"OOPS... List lenght exceeded" << endl;
            return;
        }
        first=first->next;
    }

    Node *second = head;
    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }

    cout << second->data << endl;

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

    cout << "3rd element from ending is:" << endl;
    nthFromEnding(head,3);

    return 0;
}