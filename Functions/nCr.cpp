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

int main()
{
    cout << "Enter value of n and r\n";
    int n, r;
    cin >> n;
    cin >> r;

    int answer = fact(n)/(fact (n-r)*fact(r));
   
    cout << "Value of nCr is " <<  answer  ;
    return 0;
}