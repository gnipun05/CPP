#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int count=0;
    int candy=0;
    int ate=0;

    for(int i=1;i<=n;i++)
    {
        if(candy==0)
        {   
            count++;
            candy=count;
        }
        else if(candy>=k)
        {
            candy--;
            ate++;
        }
        else
        {
            count++;
            candy+=count;
        }
    }

    cout<<ate;

    return 0;
}