#include <iostream>
using namespace std;

int fact(int num)
{
    int fact=1;
     for (int i =2; i<=num; i++)
    {
        fact=fact*i;
    }
    return fact;
}

void Pattern(int num)
{
    for (int i=0; i<=num; i++)
    {
        for (int j=0; j<=i; j++)
        {
            cout << fact(i)/(fact(i-j)*fact(j)) << " ";
        }
        cout << endl;
    }
}

int main()
{    
    int num;
    cout << "Enter a Number" << endl;
    cin >> num;
    Pattern(num);
    return 0;
}