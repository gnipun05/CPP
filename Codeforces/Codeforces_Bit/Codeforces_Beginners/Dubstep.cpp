#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int len = str.length();
    for(int i=0; i<len; i++)
    {
        if(((len-1-i-2)>=0) && str.at(i)=='W' &&  str.at(i+1)=='U' && str.at(i+2)=='B')
        {
            cout << " ";
            i+=2;
        }
        else
        cout << str.at(i) ;
        if(i>=len-1)
        break;
    }
    return 0;
}   