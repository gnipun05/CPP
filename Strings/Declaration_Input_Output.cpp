#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string str1;
    cout << "Enter a String" << endl;
    cin >> str1; // takes only one word
    cout << str1 << endl;

    string str2="hello";
    cout << str2 << endl;

    string str3(5,'Y');
    cout << str3 << endl; // orints YYYYY

    string str4;
    cout << "Enter a Sentence" << endl;
    getline(cin,str4); // takes one full line
    cout << str1 << endl;

    return 0;
}