/* Update bit is Clear bit + Set bit */

#include <bits/stdc++.h>
using namespace std;

int updateBit(int n,int p, bool v)
{
    int temp = ~(1<<p);
    n = n & temp;
    return n|(v<<p);
}

int main()
{
    int n,position;
    bool value;
    cin >> n >> position >> value;

    int answer=updateBit(n, position, value);
    cout << answer << endl;

    return 0;
}