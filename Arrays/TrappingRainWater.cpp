// Program to calcuate the maximum anount of storeable rain water between the walls whose heights are stored in an array

#include <bits/stdc++.h>
using namespace std;

void TrappingRainWtr(int *arr, int n)
{
    int lmax[n], rmax[n];
    int res=0;

    lmax[0]=arr[0]; // maximum height to the left of leftmost wall will be the leftmost wall itself
    rmax[n-1]=arr[n-1]; // maximum height to the right of rightmost wall will be the rightmost wall itself

    for(int i=1; i<n; i++)
        lmax[i]=max(lmax[i-1],arr[i]);

    for(int i=n-2; i>=1; i--)
        rmax[i]=max(rmax[i+1],arr[i]);

    for(int i=1; i<n-1; i++)
        res=res+min(rmax[i],lmax[i])-arr[i];

    cout << res;
}

// Leetcode efficient solution
// int trap(vector<int>& height) {
//     int l = 0, r = height.size()-1, level = 0, water = 0;
//     while (l < r) {
//         int lower = height[height[l] < height[r] ? l++ : r--];
//         level = max(level, lower);
//         water += level - lower;
//     }
//     return water;
// }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    TrappingRainWtr(arr,n);

    return 0;
}