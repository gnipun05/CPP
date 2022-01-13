/* A Program to remove duplicates from a  Sorted Linked List */
/* In this we are Reversing the end elements of the list first and
 then adding the nth element from starting */
#include <iostream>
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

void removeDuplicates(Node* head)
{
    if(head==NULL)
    return;

    Node* curr=head;
    while(curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            Node* temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else
            curr=curr->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head -> next = new Node(30);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(30);

    cout << "Initial Linked List: "<< endl;
    display(head);

    cout << "New Linked list" << endl;
    removeDuplicates(head);
    display(head);

    return 0;
}