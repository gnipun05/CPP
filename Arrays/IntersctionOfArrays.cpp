/* A program to find the number of elements common in both arrays, i.e. Intersection of Arrays.
(This is a Naive solution. Efficient solution is done by using Hashing(Unordered Sets)) */

#include <bits/stdc++.h>
using namespace std;

int intersection(int a[], int len1, int b[], int len2)
{
    int result=0;
    for(int i=0; i<len1; i++)
    {
        bool flag = false;
        for(int j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
                flag=true;
                break;
            }
        }

        if(flag==true)
            continue;

        for(int j=0; j<len2; j++)
        {
            if(a[i]==b[j])
            {
                result++;
                break;
            }
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