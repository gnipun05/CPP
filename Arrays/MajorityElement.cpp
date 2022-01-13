// Boyer Moore's Voting Algorithm
// Prog to find the Majority Element in an Array (An element is called as Mojority if it occurs striclty more than n/2 times in an array)

#include <bits/stdc++.h>
using namespace std;

int majority(int *arr, int n)
{
    // First part:- This will give us a candidate which might be a Majority Element. To check, we go to the Second part
    int count=1, res=0; 
    for(int i=1; i<n; i++)
    {
        if(arr[res]==arr[i])
            count ++;
        else
            count--;

        if(count == 0)
        {
            count = 1;
            res=i;
        }
    }

    // Second part:- To check if the candidate is really a Majority Element
    count=0;
    for(int i=0; i<n; i++)
        if(arr[res]==arr[i])
            count ++;

    if (count <= n/2)
        return -1;
    
    return arr[res];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout << majority(arr,n);

    return 0;
}