#include <iostream>
using namespace std;

int main()
{
    string str1="fam", str2="ily";

    cout << str1+str2 << endl; // prints family

    cout << str1.append(str2) << endl; // prints family
    cout << str1; // prints family

    return 0;
}