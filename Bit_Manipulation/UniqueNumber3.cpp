/* A program to find a unique number in an array where all the nunbers
 except one, are present thrice */

#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
    return n&(1<<pos);
}

int setBit(int n, int pos)
{
    return n| (1<<pos);
}

int unique(int arr[], int n)
{
    int result=0;
    for(int i=0; i<64; i++) // for a 64 bit possible input
    {
        int sum=0;
        for(int j=0; j<n; j++)
        {
            if(getBit(arr[j],i))
            sum++;
        }
        if(sum%3!=0)
        result = setBit(result,i);
    }
    return result;
}

int main()
{
    int n=10;
    int arr[n]={1,2,3,1,4,2,3,1,2,3};

    int answer = unique(arr,n);
    cout << answer;
    return 0;
}