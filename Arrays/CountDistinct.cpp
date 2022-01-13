/* A Program to count distinct elements in an array (This is a Naive Solution)
Efficient solution is by Hashing (Unordered Sets) */
#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    int size=0;
    for(int i=0; i<n; i++)
    {
        bool flag = false;
        for(int j=0; j<i; j++)
            if(arr[i]==arr[j])
                {flag=true; break;}

        if(flag==false)
            size++;

    }
    return size;
}

int main()
{
    int arr[]={1,2,1,3,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "Number of distinct elements in array are: " << countDistinct(arr,len) << endl;
    return 0;
}