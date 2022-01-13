#include <iostream>
using namespace std;

int main()
{
    string st, str;
    cin >> st;
    cin >> str;

    int check = 0;

    int len = st.length();
    for(int i=0; i<len; i++)
    {
        if(tolower(st.at(i))>tolower(str.at(i)))
        {check=1; break;}
        if(tolower(st.at(i))<tolower(str.at(i)))
        {check=-1; break;}
    }

    cout << check;

    return 0;
}