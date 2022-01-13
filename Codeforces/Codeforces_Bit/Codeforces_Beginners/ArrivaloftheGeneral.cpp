#include <iostream>
using namespace std;

int main()
{
    int n, minimum=0, maximum=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i];
        minimum = min(arr[i],minimum);
        maximum = max(arr[i],maximum);
    }

    int count = 0;

    while (arr[0]!=maximum && arr[n-1]!=minimum)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]==minimum && j!=n-1)
            {
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                count++;
            }
            if(arr[j]==maximum && j!=0)
            {
                int temp = arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                count++;
            }
        }
    }

    cout << count;

    return 0;
}