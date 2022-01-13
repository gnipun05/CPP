#include <iostream>
#include <cmath>
using namespace std;

int lucky(int n)
{
    int check=0;
    while (n>0)
    {
        if(!(n%10==7 || n%10==4))
        {
            check =-1;
            break;
        }
        n/=10;
    }
    return check;
}

int main()
{
    int num;
    cin >> num;
    int check=-1;

    check = lucky(num);

    if(check == -1)
    {
        for(int i=1; i<=num; i++)
        {
            if(num%i==0 && lucky(i)==0)
            {
                check = 0;
                break;
            }
        }
    }

    if(check ==0)
    cout << "YES";
    else
    cout << "NO";

    return 0;
}