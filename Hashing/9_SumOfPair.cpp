/* A Program to check if sum of a pair in an unsorted array is equal to the Given Sum */

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool isPair(int arr[], int n, int sum)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        if(s.find(sum-arr[i])!=s.end())
            return true;
        else
            s.insert(arr[i]);
    }
    return false;
}

int main()
{
    int arr[]={8,3,4,2,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum=6;

    cout << boolalpha << isPair(arr,len,sum);

    return 0;
}