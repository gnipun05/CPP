#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    cin >> arr[i];

    int arr2[n+1];
    for(int i=1; i<=n; i++)
    arr2[arr[i]]=i;

    for(int i=1; i<=n; i++)
    cout << arr2[i] << " ";

    return 0;
}