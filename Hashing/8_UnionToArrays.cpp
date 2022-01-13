/* A program to find union of two unsorted arrays */

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int unionOfArrays(int a[], int m, int b[], int n)
{
    unordered_set <int> s(a, a+m);
    for(int i=0; i<n; i++)
        s.insert(b[i]);
    return s.size();
}

int main()
{
     int a[]={10,20,10,30,20};
    int b[]={20,10,10,40};

    cout << "There are " << unionOfArrays(a,5,b,4) << " different elements in both arrays";

    return 0;
}