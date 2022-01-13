/* A Program to calculate number of distinct elements in a Window of size k in an Array */

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void distinctElements(int arr[],int n, int k)
{
    unordered_map <int,int> m;
    for(int i=0; i<k; i++)
        m[arr[i]]++;
    cout << m.size() << " ";

    for(int i=k; i<n; i++)
    {
        if(m[arr[i-k]]==1)
            m.erase(arr[i-k]);
        else 
            m[arr[i-k]]--;
        

        // if(m.find(arr[i])==m.end())
        //     m.insert({arr[i],1});
        // else
            m[arr[i]]++; // this line alone will add key arr[i] in map(if not already present) and initialise it with 0++ i.e 1 (or increase by one if already present)

        cout << m.size() << " ";
    }
}

int main()
{
    int arr[]={10,20,10,10,30,40};
    int len = sizeof(arr)/sizeof(arr[0]);
    int k=4; // size of Window

    distinctElements(arr,len,k);
    return 0;
}