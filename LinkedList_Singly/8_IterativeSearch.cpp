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

int search (Node *head, int val)
{
    Node *temp = head;
    int counter=1;
    while(temp!=NULL && temp->data != val)
    {
        counter ++;
        temp = temp->next;
    }

    if(temp == NULL)
        return -1;
    
    return counter;
}

int main()
{
    Node *head=new Node(10);
    head -> next = new Node(34);
    head -> next -> next = new Node(23);
    head -> next -> next -> next = new Node(7);

    cout << "Enter the value to be searched: \n";
    int val;
    cin >> val;

    int position = search(head, val);
    cout << position;

    return 0;
}