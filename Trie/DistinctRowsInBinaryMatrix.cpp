// count the number of distinct rows in a binary matrix
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

int m=5, n=3;
bool matrix [5][3]; // m=5, n=3

struct TrieNode{
    TrieNode *child[2];
    TrieNode(){
        child[0]=NULL;
        child[1]=NULL;
    }
};

bool insert(TrieNode* root, int row){
    TrieNode* curr=root;
    bool flag=false;
    for(int i=0; i<n; i++){
        int index=matrix[row][i];
        if(curr->child[index]==NULL){
            curr->child[index]=new TrieNode();
            flag=true;
        }
        curr=curr->child[index];
    }
    return flag;
}

int countDist(){
    TrieNode *root=new TrieNode();
    int answer=0;
    for(int i=0; i<m; i++){
        if(insert(root, i))
            answer++;
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