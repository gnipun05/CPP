/* s.begin() is the index of 1st character present in the String s
   s.end() is the index of character present after the last character present in the String s

   sort(s.begin(), s.end()); sorts the characters of string s lexicographically */

#include <iostream>
#include <algorithm> // remember to include <algorithm>  if not inlcuding <bits/stdc++.h>
using namespace std;

int main()
{
    string s="ishaan";
    sort(s.begin(), s.end());
    cout << s;
    return 0;
}