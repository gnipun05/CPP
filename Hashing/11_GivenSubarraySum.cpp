/* A program to check for the existence of a Subarray with given sum */

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool isSum(int arr[], int n, int sum)
{
    int prefix_sum=0;
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        prefix_sum+=arr[i];
        if(s.find(prefix_sum-sum)!=s.end() || prefix_sum==sum) // if we add 0 explicitly in set before the loop, we won't require --> prefix_sum==sum
            return true;
        
        s.insert(prefix_sum);
    }
    return false;
}

int main()
{
    int arr[]={5,8,6,13,3,-1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum=22;

    cout << boolalpha << isSum(arr,len,sum) << endl;
    return 0;
}