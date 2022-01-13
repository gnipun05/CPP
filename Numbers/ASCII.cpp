#include <iostream>
using namespace std;

int main()
{
    cout << "Enter any character\n";
    char ch;
    cin >> ch;
    int value = (int)ch;
    cout << "ASCII value of "<< ch << " is " << value;
    return 0;
}