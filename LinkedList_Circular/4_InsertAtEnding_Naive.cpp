/* A Naive Solution */
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next=NULL;
    }
};

void display(Node *head)
{
    if(head == NULL)
    {
        cout << "List is Empty...";
        return ;
    }

    Node *curr=head;
    do
    {
        cout << curr->data << " ";
        curr=curr->next;
    } while (curr!=head);
    cout << endl;
}

Node *insertAtEnding(Node* head, int val)
{
    Node *temp = new Node(val);

    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }

    Node* curr=head;

    while(curr->next != head)
    {
        curr=curr->next;
    }
    curr->next = temp;
    temp->next = head;

    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    cout << "Original Linked List" << endl;
    display(head);

    head=insertAtEnding(head, 56);

    cout << "New Linked List" << endl;
    display(head);

    return 0;
}