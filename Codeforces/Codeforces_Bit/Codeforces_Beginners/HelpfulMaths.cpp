#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int len = str.length()/2 +1, j=0;
    int arr[len];
    for(int i=0; i<len; i++)
    {
        arr[i]=(int)(str.at(j))-48;
        j+=2;
    }

    int k=0;
    int arr2[len];
    for(int i=0; i<len; i++)
    {
        if(arr[i]==1)
        {arr2[k]=arr[i];
        k++;}
    }
    for(int i=0; i<len; i++)
    {
        if(arr[i]==2)
        {arr2[k]=arr[i];
        k++;}
    }
    for(int i=0; i<len; i++)
    {
        if(arr[i]==3)
        {arr2[k]=arr[i];
        k++;}
    }

    for(int i=0; i<len; i++)
    {
        cout << arr2[i];
        if(i!=len-1)
        cout << '+';
    }

    return 0;
}   