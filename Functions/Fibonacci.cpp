#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
    cout  << "Enter a Number: \n";
    int num;
    cin >> num;
    switch (num)
    {
        case 1:
        cout << 0;
        break;
        case 2: 
        cout << 1;
        break;
        default:
        cout << fibonacci(num);
    }
    return 0;
}

int fibonacci(int n)
{
    int a=0;
    int b=1;
    int sum=0;
    for (int i=3; i<=n; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}