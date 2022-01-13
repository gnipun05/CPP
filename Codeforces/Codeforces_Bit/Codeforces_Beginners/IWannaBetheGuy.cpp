#include <iostream>
using namespace std;
 
int main()
{
    int n, p;
    cin >> n >> p;
 
    int a[p];
    for(int i=0; i<p; i++)
    cin >> a[i];

    int q;
    cin >>q;
    int b[q];
    for(int i=0; i<q; i++)
    cin >> b[i];
 
    int ans[n+1];
    for(int i=0; i<=n; i++)
    ans[i]=0;
 
    for(int i=0; i<p; i++)
    ans[a[i]]=1;
 
    for(int i=0; i<q; i++)
    ans[b[i]]=1;
 
    int check =1;
 
    for(int i=1; i<=n; i++)
    if(ans[i]==0)
    {
        check=0;
        break;
    }
 
    if(check == 0)
    cout << "Oh, my keyboard!";
    else 
    cout << "I become the guy.";
 
    return 0;
}