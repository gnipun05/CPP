#include <iostream>
#include <climits>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        int minval=arr[i];
        int minindex=i;
        for (int j=i; j<n; j++)
        {
            if(minval>arr[j])
            {
                minval = arr[j];
                minindex=j;
            }
        }
        if(minindex != i)
        {
            int temp =arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
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

    SelectionSort(arr,n);

    for(int i=0; i<n; i++)
    cout<<arr[i] << " ";

    return 0;
}