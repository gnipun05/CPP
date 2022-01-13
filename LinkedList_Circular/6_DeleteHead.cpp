/* An Efficient Solution */
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

Node *deleteHead(Node* head)
{
    if(head==NULL)
    {
        return head;
    }

    if(head->next ==head)
    {
        delete head;
        return NULL;
    }

    Node* temp=head->next;

    head->data=temp->data;
    head->next=temp->next;

    delete temp;

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

    head=deleteHead(head);

    cout << "New Linked List" << endl;
    display(head);

    return 0;
}