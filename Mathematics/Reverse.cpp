#include <iostream>
using namespace std;

int main()
{
    int num,newNum=0;
    cout << "Enter a Multidigit Number\n";
    cin >> num;
    while (num>0)
    {
        newNum*=10;
        newNum=newNum+num%10;
        num/=10;
    }
    cout << "Reversed Number is:" << newNum;
    return 0;
}