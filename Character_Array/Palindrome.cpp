#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch[n+1];
    cin >> ch;
    int i=0;
    bool check=true;

    while(i<n/2)
    {
        if(ch[i]!=ch[n-1-i])
        {
            check = false;
            break;
        }
        i++;
    }

    cout << boolalpha <<check ;

    return 0;
}