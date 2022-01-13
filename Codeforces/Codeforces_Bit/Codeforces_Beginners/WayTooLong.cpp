#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str[n];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }

    for(int i=0; i<n; i++)
    {
        int len = str[i].length();
        if(len>10)
        cout << str[i].at(0) << len-2 << str[i].at(len-1) << endl;        
        else
        cout << str[i] << endl;
    }

    return 0;
}