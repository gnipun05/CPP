/*
 LCM(a,b) * GCD(a,b) = a*b 
 LCM(a,b)=(a*b)/GCD(a,b)
*/

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

    int lcm=(a*b)/result;

    cout << lcm;
    return 0;
}