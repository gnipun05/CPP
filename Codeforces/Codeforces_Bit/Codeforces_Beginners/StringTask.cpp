#include <iostream>
using namespace std;

int isnotVowel(char ch)
{
    int check = 1;
    switch (ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
        check = 0;
    }
    return check;
}

int main()
{
    string str;
    cin >> str;

    int len = str.length();

    for(int i=0; i<len; i++)
    {
        if(isnotVowel(str.at(i)))
        {
            cout << "." << (char)(tolower(str.at(i)));
        }
    }
    return 0;
}