/* In this we are Reversing the end elements of the list first and then adding the nth element from starting */
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

Node* Reverse(Node* head)
{
    if(head==NULL || head->next==NULL)
        return head;

    Node *restHead=Reverse(head->next);
    Node *restTail=head->next;
    restTail->next=head;
    head->next=NULL;

    return restHead;
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