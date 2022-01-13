/* A Program to find Intersection of two Arrays */
#include <bits/stdc++.h>
using namespace std;

int intersection(int a[], int m, int b[], int n)
{
    int result=0;
    unordered_set <int> s(a,a+m);
    for(int i=0; i<n; i++)
    {
        if(s.find(b[i])!=s.end())
        {
            result++;
            s.erase(b[i]);
        }
    }
    return result;
}

int main()
{
    int a[]={10,20,10,30,20};
    int b[]={20,10,10,40};

    cout << "There are " << intersection(a,5,b,4) << " Common elements in both arrays";

    return 0;
}