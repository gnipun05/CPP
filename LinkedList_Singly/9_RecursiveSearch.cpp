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
    if (head==NULL)
    return -1;

    else if(head->data==val)
    return 1;

    else
    {
        int pos=search(head->next, val);

        if(pos==-1)
        return -1;

        else
        return pos+1;
    }
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