/* A program to compute sum of elements of each subarray

Number of subarrays of an array of n elements is ( nC2 + n ) */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for (int i=0; i<n; i++)
    {
        int sum=0;
        for (int j=i; j<n; j++)
        {
            sum = sum + arr[j];
            cout << sum << endl;
        }
    }
    return 0;
}