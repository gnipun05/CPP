#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int n,q;
    string s;
    cin>> n >> s >>q ;

    while(q>0)
    {
        int val;
        cin >> val;
        switch(val)
        {
            case 1:
            ll int l,r;
            cin >> l >> r;
            ll int count;
            count=0;
            for(ll int i=l-1; i<r; i++)
            {
                char ch=s[i];
                switch(ch)
                {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                count++;
                }
            }
            cout << count << endl;
            break;

            case 2:
            ll int i;
            char c;
            cin >> i >> c;
            s[i-1]=c;
            break;
        }
        q--;
    }
    return 0;
}