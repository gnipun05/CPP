/* A Program to find Frequency of elements of an array */

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void freq(int arr[], int n)
{
    unordered_map<int,int> m;
    for(int i=0; i<n; i++)
        m[arr[i]]++;

    //for(auto x:m)
    //    cout << x.first << " " << x.second << endl;
    // the lines just above work fine, but won't be printing in same order as that of array

    for(int i=0; i<n; i++)
    {
        if(m[arr[i]]!=-1)
        {
            cout << arr[i] << " " << m[arr[i]] << endl;
            m[arr[i]]=-1;
        }
    }
}

int main()
{
    int arr[]={50,50,10,20,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    freq(arr,len);

    return 0;
}