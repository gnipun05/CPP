// Program to generate subsets of a given string {Time Complexity: O(2^n) where n is the length of entered string containing all different characteres}

#include <bits/stdc++.h>
using namespace std;

void genSubsets(string str,string store,int i)
{
    if(str.length()==i)
    {
        cout<<store<<"\n";
        return ;
    }

    genSubsets(str,store,i+1);
    genSubsets(str,store+str[i],i+1);
}

int main()
{
    string str;
    cin>>str;
    genSubsets(str,"",0);
    return 0;
}