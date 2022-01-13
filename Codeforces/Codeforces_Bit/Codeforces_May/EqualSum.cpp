#include <bits/stdc++.h>
#define ll long long
using namespace std;

int greatestcommondivisor(ll int x, ll int y)
{
    while(x!=y)
    {
        if(x>y)
        x-=y;
        else
        y-=x;
    }
    return x; // or return y means the same
}

int main()
{
    int test;
    cin >> test;
    while(test>0)
    {
        ll int a,b, x,y;
        ll int gcd=0;
        cin >> a >> b;
        x=a+1, y=b-1 ;

        while(x<b+a && y>0)
        {
            if (x>y && x+y==a+b && a!=x && y!=b)
            {
                gcd=greatestcommondivisor(x,y);
                if(gcd==1)
                break;
            }
            else if(y<x && x+y==a+b && a!=x && y!=b)
            {
                gcd=greatestcommondivisor(y,x);
                if(gcd==1)
                break;
            }
            x++;

            if (x>y && x+y==a+b && a!=x && y!=b)
            {
                gcd=greatestcommondivisor(x,y);
                if(gcd==1)
                break;
            }
            else if(y<x && x+y==a+b && a!=x && y!=b)
            {
                gcd=greatestcommondivisor(y,x);
                if(gcd==1)
                break;
            }
            y--;
        }

        if(gcd==1)
        cout << y << " " << x << endl;
        else
        cout << "-1" << endl;
        test--;
    }
    return 0;
}