/* Dima and a Bad XOR :- https://codeforces.com/contest/1151/problem/B */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int answer=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            {
                cin >> a[i][j];
                if(j==0)
                    answer^=a[i][0];
            }

    int backupj=0,backupi=0;
    for(int i=0; i<n; i++)
        for(int j=1; j<m; j++)
            if(a[i][j]!=a[i][0])
                {
                    backupj=j;
                    backupi=i;
                }

    if(answer)
    {
        cout << "TAK" << endl;
        for(int i=0; i<n; i++)
            cout << 1 << " ";
    }
    else if(!backupi && !backupj)
        cout << "NIE";
    
    else
    {
        cout << "TAK" << endl;
        for(int i=0; i<backupi; i++)
            cout << 1 << " ";
        
            cout << backupj+1 << " ";

        for(int i=backupi+1; i<n; i++)
            cout << 1 << " ";
    }
    return 0;
}