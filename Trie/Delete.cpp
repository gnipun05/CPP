#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

struct TrieNode{
    TrieNode* child[26];
    bool isEnd;
    TrieNode(){
        for(int i=0; i<26; i++)
            child[i]=NULL;
        isEnd=false;
    }
};

bool isEmpty(TrieNode* root){
    for(int i=0; i<26; i++)
        if(root->child[i]!=NULL)
            return false;
    return true;
}

TrieNode* dltkey(TrieNode* root, string &key, int pos){
    if(root==NULL)
        return NULL;
    if(pos==key.size()){
        root->isEnd=false;
        if(isEmpty(root)){
            delete(root);
            root=NULL;
        }
        return root;
    }
    int index=key[pos]-'a';
    dltkey(root, key, pos+1);
    if(isEmpty(root) && root->isEnd==false){
        delete(root);
        root=NULL;
    }
    return root;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}