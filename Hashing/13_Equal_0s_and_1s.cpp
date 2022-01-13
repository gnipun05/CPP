/* A Program to calculate maximum length of a Subarray with equal number of 0s and 1s */

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int longestSub(int arr[], int n)
{
    int res=0,pre_sum=0;
    unordered_map<int,int> m;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0) // converting 0 and 1 array to -1 and 1 array
            arr[i]=-1;

        pre_sum+=arr[i];
        if(pre_sum==0)
            res=i+1;
        if(m.find(pre_sum)==m.end())
            m.insert({pre_sum,i});
        if(m.find(pre_sum-0)!=m.end()) //or   if(m.find(pre_sum)!=m.end())
            res=max(res, i-m[pre_sum]);
    }
    return res;
}

int main()
{
    int arr[]={1,1,1,0,1,0}; // Array consisting of only zero and one
    int len=sizeof(arr)/sizeof(arr[0]);

    cout << longestSub(arr,len) << endl;
    return 0;
}