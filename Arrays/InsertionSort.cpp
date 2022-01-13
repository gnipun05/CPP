#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
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
    cout<<"Enter size of Array"<<endl;
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter elements of Array"<<endl;

    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout << "Array after sorting is"<< endl;

    InsertionSort(arr,n);

    for(int i=0; i<n; i++)
    cout<<arr[i] << " ";

    return 0;
}