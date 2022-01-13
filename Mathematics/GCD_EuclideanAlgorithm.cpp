#include <iostream>
#include <cmath>
using namespace std;

int greatestcommondivisor(int x, int y)
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
    int a, b, result;
    cin >> a >> b;

    if(a>b)
    {
        result=greatestcommondivisor(a,b);
    }
    else
    {
        result=greatestcommondivisor(b,a);
    }

    cout << result;
    return 0;
}