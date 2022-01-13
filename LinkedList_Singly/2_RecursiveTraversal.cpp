/* Iterative solution is preffered over recursive as 
auxilary space of recursive solution is O(n), whereas it is O(1) for iterative solution
{although both have same Time Complexity, i.e. O(n)
n -> number of nodes} */

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
        return;

    cout << head -> data << endl;
    display(head->next);
}

int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    display(head);
    return 0;
}