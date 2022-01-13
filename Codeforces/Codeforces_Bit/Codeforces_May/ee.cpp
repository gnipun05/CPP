#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test>0)
    {
        ll int a,b, x,y;
        cin >> a >> b;
        if(a+b<=1 || (a==1 && b==1))
        {
            cout << "-1" << endl;
            test--;
            continue;
        }

        

        else 
        {
            cout << 1 << " " << a+b-1 << endl;
        }

        test--;
    }
    return 0;
}