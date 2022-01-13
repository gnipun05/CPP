#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 3 Numbers:" << endl;
    int x,y,z;
    cin >> x >> y >> z;

    int big = max(x,max(y,z));
    int sum = x*x + y*y + z*z - big*big;
    if(sum==big*big)
    cout << "Entered Numbers form a Triplet";
    else
    cout << "Entered Numbers don't form Triplet";
    return 0;
}