#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=right=NULL;
    }
};

vi inorderTraversal(Node* root){
    vi answer;
    stack<Node*> s;
    Node *curr=root;
    while(curr!=NULL || s.empty()==false){
        while(curr!=NULL){
            s.push(curr);
            curr->left;
        }
        curr=s.top();s.pop();
        answer.pb(curr->val);
        curr=curr->right;
    }
    return answer;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Node *root        = new Node(1);
    root->left        = new Node(2);
    root->right       = new Node(3);
    root->left->left  = new Node(4);
    root->left->right = new Node(5);
    inorderTraversal(root);
    return 0;
}