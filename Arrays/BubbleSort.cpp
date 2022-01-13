#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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

    BubbleSort(arr,n);

    for(int i=0; i<n; i++)
    cout<<arr[i] << " ";

    return 0;
}