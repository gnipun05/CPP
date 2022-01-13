/* Remark: To perform Binary Search, elements of 
array should arranged in increasing order */

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int num)
{
    int end = n-1, begin = 0;
    while(end>=begin)
    {
        int middle=(begin+end)/2;

        if(arr[middle]==num)
        return middle;

        else if (arr[middle]<num)
        begin = middle+1;

        else if (arr[middle]>num)
        end = middle-1;
    }
    return -1;
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

    int find;
    cout << "Enter the element to be searched"<< endl;
    cin >> find;

    int result = BinarySearch(arr,n,find);

    if (result!=-1) 
    cout << "Element is present";
    else
    cout << "Element is not present";

    return 0;
}