#include <bits/stdc++.h>
using namespace std;

int deleteNum (int *arr, int currsize, int num)
{   
    int i;
    for(i=0; i<currsize; i++)
        if(arr[i]==num)
            break;
    
    if(i==currsize)
        return currsize;
    
    for(int j=i; j<currsize-1; j++)
        arr[j]=arr[j+1];
    return currsize-1;
}

int main()
{
    int arr[5]={4,1,6,2,8};
    int x;
    cin>>x;
    
    int newsize;
    newsize=deleteNum(arr,5,x);
    
    for(int i=0; i<newsize; i++)
        cout<<arr[i]<<" ";
    return 0;
}