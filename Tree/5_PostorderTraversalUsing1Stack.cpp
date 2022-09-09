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
    stack<TreeNode*> st;
    TreeNode* curr=root;
    st.push(root);
    while(st.size()){
        if(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        else{
            TreeNode *temp=st.top()->right;
            if(temp==NULL){
                temp=st.top(); st.pop();
                answer.push_back(temp->val);
                while(st.empty()==false && st.top()->right==temp){
                    temp=st.top(); st.pop();
                    answer.push_back(temp->val);
                }
            }
            else
                curr=temp;
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