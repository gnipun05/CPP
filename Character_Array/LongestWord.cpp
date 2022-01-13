/* Program to find the longest word in the sentence */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n+1]; // one extra is for the null character
    cin.getline(arr,n);
    cin.ignore();

    int i=0, len=0, maxlen=0, st=0, maxst=0;

    while(1)
    {
        if(arr[i]==' '|| arr[i]=='\0')
        {
            if(maxlen<len)
            {
                maxst=st;
                maxlen=len;
            }
            len=0;
            st=i+1;
        }
        else
        len++;

        if(arr[i]=='\0')
        break;

        i++;
    }

    cout << maxlen << endl;
    for(int i=0; i<maxlen; i++)
    cout << arr[i+maxst];

    return 0;
}