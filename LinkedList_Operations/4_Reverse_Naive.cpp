/* This is a Naive Solution */
#include <iostream>
#include <vector>
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

Node* Reverse(Node* head)
{
    vector<int> v;

    for(Node* curr=head; curr!=NULL; curr=curr->next)
        v.push_back(curr->data);

    for(Node* curr=head; curr!=NULL; curr=curr->next)
    {
        curr->data=v.back();
        v.pop_back();
    }

    return head;
}

int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    cout << "Initial Linked List: "<< endl;
    display(head);

    cout << "New Reversed Linked list" << endl;
    head=Reverse(head);
    display(head);

    return 0;
}