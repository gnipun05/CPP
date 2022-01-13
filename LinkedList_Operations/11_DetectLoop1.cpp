/* A Program to Detect presence of loop 
- Linked List remains the same
- This program needs to change the structure of Node by adding a bool variable
- It takes a time of O(n) */
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    bool visited; // Crux of this program
    Node(int x)
    {
        data = x;
        next = NULL;
        visited=false;
    }
};

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is Empty" << endl;
        return;
    }

    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

bool detectLoop(Node *head)
{
    while(head!=NULL)
    {
        if(head->visited!=false)
        {
            return true;
        }
        head->visited=true;
        head=head->next;
    }
    return false;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Node *temp = new Node(50);
    head->next->next->next->next = temp;
    temp->next = new Node(60);
    temp->next->next = new Node(70);
    temp->next->next->next = new Node(80);
    temp->next->next->next->next=temp;

    bool answer = detectLoop(head);
    cout << "Presence of Loop: " << boolalpha << answer;

    return 0;
}