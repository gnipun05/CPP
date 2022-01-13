/* Program to print subsets of a set */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;
    int arr[n]={'a','b','c'};

    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i&(1<<j))
            cout << (char)arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}