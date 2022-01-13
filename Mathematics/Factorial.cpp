#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a Number\n";
    int num, fact=1;
    cin >> num;
    for (int i =2; i<=num; i++)
    {
        fact=fact*i;
    }
    cout << fact ;
    return 0;
}