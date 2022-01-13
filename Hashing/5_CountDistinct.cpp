/* A Program to find the number of disitinct elements in an array */

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int countDistinct(int arr[], int n)
{
    // unordered_set <int> s;
    // for(int i=0; i<n; i++)
    //     s.insert(arr[i]);

    unordered_set <int> s(arr, arr+n); // one line shortcut of above code 

    return s.size();
}

int main()
{
    int arr[]={1,2,1,3,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "Number of distinct elements in array are: " << countDistinct(arr,len) << endl;
    return 0;
}