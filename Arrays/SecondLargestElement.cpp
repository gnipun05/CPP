// Porgram to find second largest number in an array

#include <bits/stdc++.h>
using namespace std;

int secondLargest (int *arr, int n)
{
    int seclarg=-1,larg=0; // we initialise seclarg=-1 because it is not a gaurantee that a scond largest number will surely exist in an array {like an array={10,10,10}}
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[larg])
        {
            seclarg=larg;
            larg=i;
        }
        else if (arr[i]!=arr[larg])
        {
            if(seclarg==-1 || arr[i]>arr[seclarg])
                seclarg=i;
        }
    }
    return seclarg;
}

int main()
{
    int arr[5]={4,1,6,2,8};
    cout<< arr[secondLargest(arr,5)];
    return 0;
}