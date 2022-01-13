#include <iostream>
#include <climits>
using namespace std;

void InsertionSort(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        int current= arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for(int i=0; i<m; i++)
    cin >> arr[i];

    InsertionSort(arr,m);

    int answer=INT_MAX;

    if(m==n)
    answer=arr[m-1]-arr[0];

    else
    for(int i=0; i<=m-n; i++)
    answer=min(answer,(arr[i+n-1]-arr[i]));

    cout << answer;

    return 0;
}