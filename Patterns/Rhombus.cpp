#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter a Number: \n";
    cin>>n;
    for (int i=n-1; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<" ";
        }
        for (int j=1; j<=n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
} 