// Number of Subarrays having given sum 
// This is a O(n) solution
// O(logn) solution is done by using ordered map simply called as map

#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long
using namespace std;

ll int countSubarrays(ll int arr[], ll int n, ll int sum)
{
    ll int count=0, currSum=0;
    unordered_map<ll int,ll int> m;
    for(ll int i=0; i<n; i++)
    {
        currSum+=arr[i];

        if(currSum==sum)
        count++;

        if(m.find(currSum-sum)!=m.end())
            count+=m[currSum-sum];

        m[currSum]++;
    }
    return count;
}

int main()
{
    ll int n,x;
    cin>>n>>x;
    ll int arr[n];
    for(ll int i=0; i<n; i++)
        cin>>arr[i];

    ll int answer=countSubarrays(arr,n,x);
    cout << answer;

    return 0;
}