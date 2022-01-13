#include <iostream>
using namespace std;

int greatestcommondivisor(int x, int y)
{
    if(y==0)
    return x;
    else
    return greatestcommondivisor(y,x%y);
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