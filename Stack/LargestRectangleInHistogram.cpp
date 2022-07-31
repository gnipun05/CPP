#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

int largestRectangleArea1(vi &heights){  // Most inefficient solution O(n^2)
    int n=heights.size();
    int res=0;
    for(int i=0; i<n; i++){
        int curr=0;
        for(int j=i-1; j>=0; j--){
            if(heights[i]<=heights[j])   curr+=heights[i];
            else    break;
        }
        for(int j=i+1; j<n; j++){
            if(heights[i]<=heights[j])   curr+=heights[i];
            else    break;
        }
        res=max(res, curr);
    }
    return res;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}