/* A Recursive program to find the first and last occurrence of a number in an array */

#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if(i==n)
    return -1;

    if(arr[i]==key)
    return i;

    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[], int n, int i, int key)
{
    if(i==n)
    return -1;

    int restarray = lastocc(arr,n,i+1,key);
    if(restarray!=-1)
    return restarray;

    if(arr[i]==key)
    return i;

    return -1;
}

int main()
{
    int n=7;    
    int arr[]={4,2,1,2,5,2,7};
    int find=2; // this variable stores the value whose first and last occurrence is need to be find

    int first=firstocc(arr,n,0,find);
    int last=lastocc(arr,n,0,find);

    cout << first << " " << last;

    return 0;
}