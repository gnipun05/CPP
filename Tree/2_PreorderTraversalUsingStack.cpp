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

vector<int> preorderTraversal(TreeNode* root){
    vector<int> answer;
    if(root==NULL)
        return answer;
    stack<TreeNode*> st;
    st.push(root);
    while(st.size()){
        TreeNode* curr=st.top(); st.pop();
        answer.push_back(curr->val);
        if(curr->right)
            st.push(curr->right);
        if(curr->left)
            st.push(curr->left);
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