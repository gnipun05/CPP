#include <iostream>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    /*if n is odd; number of odd numbers will be more than even by one
    if n is even; number of odd and even numbers will be equal */

    long long int last_odd = (n+1)/2; //this will be last position of odd number possible for a set of n natural numbers

    if(k<=last_odd)
    cout << (k*2)-1;
    else
    cout << (k-last_odd)*2;
    return 0;
}