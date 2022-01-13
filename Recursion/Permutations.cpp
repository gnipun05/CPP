// #include <bits/stdc++.h> // {Apna College}
// using namespace std;

// void permutation(string str, string ans)
// {
//     if(str.size()==0){
//         cout << ans << endl;
//         return;
//     }

//     for(int i=0; i<str.length(); i++)
//     {
//         char ch=str[i];
//         string remaining = str.substr(0,i)+str.substr(i+1); // remaining string will have all letters except ch
//         permutation(remaining, ans+ch);
//     }

//     return;
// }

// int main()
// {
//     string str="ABC";

//     permutation(str,"");

//     return 0;
// }

#include <bits/stdc++.h>  // {GFG}
using namespace std;
         
void permutation(string str, int i)
{
    if(i==str.length()-1)
    {
        cout << str << endl;
        return;
    }

    for(int j=i; j<str.length(); j++)   
    {
        swap(str[j],str[i]);
        permutation(str,i+1);
        swap(str[j],str[i]);  // this swap is to get the original passed string back
    }
}

int main()
{
    string str="ABC";

    permutation(str,0);

    return 0;
}