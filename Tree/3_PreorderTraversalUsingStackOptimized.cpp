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
    TreeNode *curr=root;
    while(st.size()){
        if(curr){
            answer.push_back(curr->val);
            st.push(curr->right);
            curr=curr->left;
        }
        else{
            curr=st.top();
            st.pop();
        }
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