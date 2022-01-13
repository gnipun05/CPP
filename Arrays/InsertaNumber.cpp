// We are assuming that there is some extra space in array to insert an element. If the array is full, we cant insert any element in it.

#include <bits/stdc++.h>
using namespace std;

int insertNum (int *arr, int currsize, int totalsize, int num, int pos)
{
    if(currsize==totalsize)
        return totalsize;
    
    int index=pos-1;
    for(int i=totalsize-1; i>=index; i--)
        arr[i+1]=arr[i];

    arr[index]=num;
    return currsize+1;
}

int main()
{
    int arr[7]={4,1,6,2,8}; // array contains 5 elements in an array of size 7
    int x,pos;
    cin>>x>>pos;
    int newsize;
    if(pos<=7)
        newsize=insertNum(arr,5,7,x,pos);
    
    for(int i=0; i<7; i++)
        cout<<arr[i]<<" ";
    return 0;
}