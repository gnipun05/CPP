#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int maxLen(int arr[], int n, int sum)
{
    int res=0;
    int pre_sum=0;
    unordered_map<int,int> m;
    for(int i=0; i<n; i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==sum)
            res=i+1;
        if(m.find(pre_sum)==m.end())
            m.insert({pre_sum,i});
        if(m.find(pre_sum - sum)!=m.end())
            res=max(res, i-m[pre_sum-sum]);
    }
    return res;
}

int main()
{
    int arr[]={8,3,1,5,-6,6,2,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum=4;
    cout << maxLen(arr,len,sum);
    return 0;
}