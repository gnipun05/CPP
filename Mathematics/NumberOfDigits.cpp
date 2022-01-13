#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int digits = (floor(log10(n))+1);
    cout << digits << endl;
    return 0;
}