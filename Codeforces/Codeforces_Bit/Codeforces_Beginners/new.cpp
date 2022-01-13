#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, minimum=INT_MAX, maximum=INT_MIN;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        minimum = min(arr[i],minimum);
        maximum = max(arr[i],maximum);
    }


    int small, big;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==maximum)
        {
            small=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==minimum)
        {
            big=i;
            break;
        }
    }

    int answer;
    if(small>big)
    answer= small +(n-1 - big) -1;
    else
    answer= small +(n-1 - big);

    cout << answer;
    
    return 0;
}