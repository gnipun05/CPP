#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int count=0;
    int i=n, j=m;
    while(i>=0 && j>=0)
    {
        int product = m*n;
        if(product == 0)
        break;
        count++;
        i--;
        j--;
    }

    if(count%2==1)
    cout << "Malvika";
    else 
    cout << "Akshat";

    return 0;
}