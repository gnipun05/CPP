/* SOLUTION BY GFG IS IS DIFFERENT and BETTER.... HAVE A LOOK ON IT */

/* A program to find a unique number in an array where all the nunbers
 except two, are present twice */

#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return (n&(1<<pos));
}

void unique(int arr[], int n)
{
    int  xorsum=0;
    for(int i=0; i<n; i++){
        xorsum=xorsum^arr[i];
    }
    int tempxorsum=xorsum;

    int pos=0;
    int getbit=0;
    while(!(getbit)){
        getbit = xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }

    int newxorsum=0;
    for(int i=0; i<n; i++){
        if(getBit(arr[i],pos-1))
        newxorsum=newxorsum^arr[i];
    }

    cout << newxorsum << endl;
    cout << (newxorsum^tempxorsum) << endl;
}

int main()
{
    int n=8;
    int arr[n]={2,4,6,7,4,5,6,2};

    unique(arr,n);
    return 0;
}