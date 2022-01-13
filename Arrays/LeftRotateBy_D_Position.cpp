// Program to left rotate the arrray by D positions {Auxilary Space: Theta(1)  and   Time Complexity: O(n)}

#include <bits/stdc++.h>
using namespace std;

void reverse(int *arr, int left, int right)
{
    while (left<right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
void leftRotate_D (int *arr, int n, int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int d;
    cin>>d;
    
    leftRotate_D(arr,n,d);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}