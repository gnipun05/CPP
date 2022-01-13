/*
An Armstrong number is a number such that the sum
of its digits raised to the third power is equal to the number itself.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num,sum=0;
    cout << "Enter a Multidigit Number\n";
    cin >> num;
    int store = num;
    while (num>0)
    {
        int l = num%10;
        sum = sum + pow(l,3);
        num/=10;
    }
    if (sum==store)
    cout << "Entered Number is an Armstrong Number";
    else
    cout << "Entered Number is not an Armstrong Number";
    return 0;
}