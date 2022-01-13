// Observe that the array is sorted

#include <bits/stdc++.h>
using namespace std;

int removeduplicates(int *arr, int n)
{
    int index=1;
    for(int i=1; i<n; i++)
        if(arr[index-1]!=arr[i]){
                arr[index]=arr[i];
                index++;
            }

    return index;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    n=removeduplicates(arr,n);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}