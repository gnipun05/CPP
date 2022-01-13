#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int newnum=0 , store = n;
    while(n>0)
    {
        newnum *= 10;
        newnum += n%10;
        n /= 10;
    }
    if(newnum == store)
    return true;
    return false;
}

int main()
{
    int num;
    cin >> num;

    bool result = palindrome(num);

    cout << result;
    return 0;
}