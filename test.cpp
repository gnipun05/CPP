#include <iostream>
using namespace std;

int main()
{
    string str="hello there wasssup";
    cout << str << endl;

    for(char a:str)  // to print individual characters
        cout<<a;
    cout<<endl;

    int a=5;
    int *ptr=&a;
    cout << a <<' '<< ptr << endl;

    cout <<-1;
    return 0;
}