/*Program to calculate the maximum number of pieces in which a rope of length n can be divided in
 the lengths of a, b and c. 
 Time complexity of this solution is O(3^n).
 Better solution is by Dynamic Programming.                                        */

#include <bits/stdc++.h>
using namespace std;

int maxPieces(int n, int a, int b, int c)
{
    if(n==0)
        return 0;
    
    if(n<0)
        return -1;
    
    int res = max(maxPieces(n-a,a,b,c),max(maxPieces(n-b,a,b,c),maxPieces(n-c,a,b,c)));

    if(res==-1)
        return -1;
    else
        return res+1; 
}

int main()
{
    int n, a, b, c;
    cin>>n>>a>>b>>c;

    cout << maxPieces(n,a,b,c);
    return 0;
}