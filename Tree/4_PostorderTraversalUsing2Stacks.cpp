#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        left=right=NULL;
    }
};

vector<int> postorderTraversal(TreeNode* root){
    vector<int> answer;
    if(root==NULL)
        return answer;
    stack<TreeNode*> st1, st2;
    st1.push(root);
    while(st1.size()){
        TreeNode* curr=st1.top(); st1.pop();
        st2.push(curr);
        if(curr->left)
            st1.push(curr->left);
        if(curr->right)
            st1.push(curr->right);
    }
    while(st2.size()){
        answer.push_back(st2.top()->val);
        st2.pop();
    }
    return answer;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}