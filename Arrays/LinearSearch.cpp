#include <iostream>
using namespace std;

int LinearSearch(int arr[],int n, int num)
{
    for (int i=0; i<n; i++)
    if (arr[i]==num)
    return i;
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

    int result = LinearSearch(arr,n,find);

    if (result!=-1) 
    cout << "Element is present";
    else
    cout << "Element is not present";

    return 0;

}