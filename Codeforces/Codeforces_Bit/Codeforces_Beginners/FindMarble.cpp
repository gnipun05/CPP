#include <iostream>
using namespace std;

int main()
{
    int n,s,t;
    cin >> n >> s >> t;
    
    int pattern[n+1];
    pattern[0]=0;
    for(int i=1; i<=n; i++)
    cin >> pattern[i];

    int store = s;

    int count=0;
    while(s!=t)
    {
        count++;
        s=pattern[s];
        if(store==s)
        {
            count = -1;
            break;
        }
    }

    cout << count;
    return 0;
}