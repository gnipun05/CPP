/* Find the longest sunbsequence of an Array consisting of consecutive elements (Efficient Method) */

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int consecSequence (int arr[], int n)
{
    unordered_set <int> s(arr,arr+n);
    int res=1;
    for(auto x:s)
    {
        if(s.find(x-1)==s.end())
        {
            int curr=1;
            while(s.find(x+curr)!=s.end())
                curr++;
            res=max(res,curr);
        }
    }
    return res;
}

int main()
{
    int arr[]={2,9,4,3,10,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len); // Sorts in increasing / ascending order

    cout << consecSequence(arr,len);
    return 0;
}