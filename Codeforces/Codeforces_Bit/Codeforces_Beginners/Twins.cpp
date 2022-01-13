#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];

    insertionSort(arr,n);

    int answer=0;
    for(int i=n-1; i>=0; i--)
    {
        int sum=0, endsum=0;
        for(int j=0; j<i; j++)
        {
            sum+=arr[j];
        }
        for(int j=n-1; j>=i; j--)
        {
            endsum+=arr[j];
        }
        if(sum<endsum)
        {
            answer=n-i;
            break;
        }
    }

    cout << answer;

    return 0;
}