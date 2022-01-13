#include <bits/stdc++.h>
using namespace std;

void shift(int *arr, int n)
{
    for(int i=0,j=0; i<n; i++) // j is to  store the position of place where loop will find 0
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    shift(arr,n);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}