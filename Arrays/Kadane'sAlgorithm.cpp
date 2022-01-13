/* kedane's algorithm calculates maximum subarray sum in BigOh(n) 
 If all the elements of an array are negative then Kedane's Algo will return the number with smallest absolute value*/

#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int sum=0;
    int maximum=INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];

        maximum=max(maximum,sum);

        if(sum<0)
            sum=0;
    }
    return maximum;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];

    int answer = kadane(arr, n);

    cout << answer;

    return 0;
}