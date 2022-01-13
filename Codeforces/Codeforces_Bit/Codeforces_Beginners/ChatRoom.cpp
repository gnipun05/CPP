#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    string hello = "hello";

    int j=0;
    for(int i=0; i<len; i++)
    {
        if(str.at(i)==hello.at(j))
        {
            j++;
            if(j==5)
            break;
        }
    }

    if(j==5)
    cout << "YES";
    
    else
    cout << "NO";

    return 0;
}