/* A program to find a unique number in an array where all the nunbers
 except one, are present twice */

#include <bits/stdc++.h>
using namespace std;

int unique(int arr[], int n)
{
    int  xorsum=0;
    for(int i=0; i<n; i++){
        xorsum=xorsum^arr[i]; // ^ is called as BITWISE XOR
    }
    return xorsum;
}

int main()
{
    int n=7;
    int arr[n]={5,8,2,5,4,2,8};

    int answer = unique(arr,n);
    cout << answer;
    return 0;
}