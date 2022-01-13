#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    int arr[m];
    for(int i=0; i<m; i++)
    cin >> arr[i];

    int j=0, house =1;
    long long int  time =0;
    while(j!=m)
    {
        if(house < arr[j])
        {
            time += arr[j]-house;
        }
        else if(house>arr[j])
        {
            time += arr[j]-house +n;
        }
        house = arr[j];
        j++;
    }

    cout << time;

    return 0;
}