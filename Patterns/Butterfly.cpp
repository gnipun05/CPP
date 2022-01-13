#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    int n=num*2;
    for(int i=1; i<=num; i++)    
    {
        for(int j=1; j<=n;j++)
        {
            if(j<=i || j>(n-i))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=num;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i || j>(n-i))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}