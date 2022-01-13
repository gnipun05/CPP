/* We Assume that the Linked List is already Sorted */
/* This Program is to insert a Node such that list remains Sorted */
/* head pointer will change only when Initial List is either empty or the value of x is less than head */

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


Node *sortedInsert(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
        return temp;
    
    if(x<head->data)
    {
        temp->next = head;
        return temp;
    }

    Node *curr=head;
    while(x > curr->next->data && curr->next != NULL)
        curr=curr->next;

    temp->next=curr->next;
    curr->next=temp;

    return head;
}

void display(Node *head)
{
    if(head==NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

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
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    cout << "Initial Linked List \n";
    display(head);

    head=sortedInsert(head,23);

    cout << "Final Linked List \n";
    display(head);

    return 0;
}