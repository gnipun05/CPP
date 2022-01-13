#include <iostream>
#include <climits> // written when INT_MAX AND INT_MIN are used in the program
using namespace std;

int main ()
{
    int arr[5];
    cout << "Enter 5 integeral elemnts of Array" << endl;

    for (int i=0; i<5; i++)
        cin >> arr[i];

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for (int i=0; i<5; i++)
    {
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }

    cout<<"Min Value is "<< minNo << endl << "Max Value is " << maxNo;

    return 0;
}