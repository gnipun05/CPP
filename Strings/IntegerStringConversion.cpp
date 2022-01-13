/* stoi(s); will convert the numeric string to an integer data type
 to_string(number); will convert an Integer to a String */

#include <iostream>
using namespace std;

int main()
{
    string s= "786";
    int value = stoi(s);
    cout << value +2 << endl; // prints 788

    int number=786;
    string str= to_string(number);
    cout << str + "2"; // prints 7862

    return 0;
}