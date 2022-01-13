#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int position=1;
    int arr[n+1];
    arr[0]=0;

    for(int i=1; i<=n; i+=2)
    {
        arr[position]=i;
        position++;
    }
    for(int i=2; i<=n; i+=2)
    {
        arr[position]=i;
        position++;
    }

    cout << arr[k];

    return 0;
}