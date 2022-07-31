#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

struct TrieNode{
    TrieNode *child[26]; // array has size of 26 for 26 lowercase letters
    bool isEnd;
    TrieNode(){
        for(int i=0; i<26; i++)
            child[i]=NULL;
        isEnd=false;
    }
};

void search (TrieNode* root, string &key){ // key is the string to be inserted
    TrieNode *curr = root;
    for(int i=0; i<key.size(); i++){
        int index=key[i]-'a';
        if(curr->child[index]==NULL)
            curr->child[index]=new TrieNode();
        curr=curr->child[index];
    }
    curr->isEnd=true;;
    return;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}