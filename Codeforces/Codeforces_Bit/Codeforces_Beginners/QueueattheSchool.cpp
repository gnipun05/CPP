#include <iostream>
using namespace std;

int main()
{
    int n, time;
    cin >> n >> time;

    char ch[n];
    for (int i=0; i<n;i++)
    cin >> ch[i];

    int k=0;
    while(k<time)
    {
        for(int j=0;j<n;j++)
        {
            if (ch[j]=='B' && ch [j+1]=='G')
            {
                ch[j]='G';
                ch[j+1]='B';
                j++;
            }
        }
        k++;
    }

    for(int x=0; x<n; x++)
    cout << ch[x];
    return 0;
}