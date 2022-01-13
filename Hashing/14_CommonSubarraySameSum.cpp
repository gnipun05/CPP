/* A program to find Longest common Subarray (having same starting and ending indexes) having same Sum */

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int commonSub(int a[], int n, int b[])
{
    int res=0, pre_sum=0;
    for(int i=0; i<n; i++)
        if(b[i]==1)
            b[i]=-1;

    unordered_map <int,int> m;
    for(int i=0; i<n; i++)
    {
        pre_sum+=a[i]+b[i];
        if(pre_sum==0)
            res=i+1;
        if(m.find(pre_sum)==m.end())
            m.insert({pre_sum,i});
        if(m.find(pre_sum)!=m.end())
            res= max(res , i-m[pre_sum]);
    }
    return res;
}

int main()
{
    int arr1[]={0,1,0,0,0,0};
    int arr2[]={1,0,1,0,0,1};

    int len=sizeof(arr1)/sizeof(arr1[0]); // same is for second array

    cout << commonSub(arr1,len,arr2);

    return 0;
}