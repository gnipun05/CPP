#include <iostream>
using namespace std;

int main ()
{
    int n, i;
    cout<<"Enter a Number: \n";
    cin>>n;
    for (i=1; i<=n; i++)
    {
        for (int j=1; j<=n+1-i; j++)
        {
            cout << "  ";
        }
        for (int j=1; j<=(2*i-1); j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
    for (; i>=1; i--)
    {
        for (int j=1; j<=n+1-i; j++)
        {
            cout << "  ";
        }
        for (int j=1; j<=(2*i-1); j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
} 