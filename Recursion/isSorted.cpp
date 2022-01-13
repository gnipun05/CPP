/* A Recursive program to check if an array is Sorted or not */

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    if(n==1)
    return true; // because single element will always be sorted

    int restArray = isSorted(arr+1, n-1); // due to arr+1, value present at index 2 will shift to 1
    return (arr[0]<=arr[1] && restArray); 
}

int main()
{
    int arr[]={24,6,8,23,45};

    bool answer = isSorted(arr, 5);
    cout << answer;
    return 0;
}