/* A program to find frequencies of array elements (Its a Naive Solution).
Efficient solution is by Hashing (Unordered Sets) */

#include <bits/stdc++.h>
using namespace std;

void prinFreq(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        bool flag=false;
        for(int j=0; j<i; j++) // for elements before the current
            if(arr[i]==arr[j])
                {flag=true; break;}

        if(flag==true)
            continue;

        int freq =1;
        for(int j=i+1; j<n; j++) // for elements after the current
            if(arr[i]==arr[j])
                freq++;

        cout << arr[i] << " " << freq << endl;
    }
}

int main()
{
    int arr[]={1,2,1,3,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    prinFreq(arr,len);

    return 0;
}