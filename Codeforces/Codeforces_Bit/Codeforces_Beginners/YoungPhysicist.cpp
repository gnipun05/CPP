#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n+1], y[n+1], z[n+1];
    x[n]=0, y[n]=0, z[n]=0;

    for(int i=0; i<n; i++)
    {
        cin >> x[i]>> y[i]>> z[i];
        x[n]+=x[i], y[n]+=y[i], z[n]+=z[i];
    }
    
    if(x[n]==0 && y[n]==0 && z[n]==0)
    cout << "YES";
    else
    cout << "NO";

    return 0;
}