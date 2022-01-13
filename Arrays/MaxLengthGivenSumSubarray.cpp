#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n, int sum)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        int curr_sum=0;
        int count=0;
        for(int j=i; j<n; j++)
        {
            curr_sum+=arr[j];
            count++;
            if(curr_sum==sum)
                res=max(res,count);
        }
    }
    return res;
}

int main()
{
    int arr[]={3,1,0,1,8,2,3,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum=5;
    cout << maxLen(arr,len,sum);
    return 0;
}