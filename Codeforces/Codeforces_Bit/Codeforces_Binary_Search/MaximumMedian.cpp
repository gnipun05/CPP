#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int n,k;
    cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    if(n==1)
    {
        cout << a[0]+k;
        return 0;
    }

    int check=1;
    int mid=(n-1)/2;
    while(check<=k)
    {
        a[mid]++;
        InsertionSort(a,n);
        check++;
    }

    cout << a[mid];

    return 0;
}