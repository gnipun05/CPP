/* A program to check for the existence of a Subarray with zero sum */

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool isZero(int arr[], int n)
{
    int prefix_sum=0;
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        prefix_sum+=arr[i];
        if(s.find(prefix_sum)!=s.end() || prefix_sum==0) // if we add 0 explicitly in set before the loop, we won't require --> prefix_sum==sum
            return true;
        
        s.insert(prefix_sum);
    }
    return false;
}

int main()
{
    int arr[]={-3,4,-3,-1,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << boolalpha << isZero(arr,len) << endl;
    return 0;
}