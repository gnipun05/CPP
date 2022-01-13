#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n; // input a decimal number
    for(int i=15;i>=0;i--) //16-bit
    {
        if(n&(1<<i))
            cout<<"1";
        else
            cout<<"0";
    }
    return 0;
}