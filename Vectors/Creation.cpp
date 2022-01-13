#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1; // zero lenght int vector
    vector<int> vec11{23}; // vector containing one element i.e. 23
    vector<int> vec2(4); // 4-element length int vector 
    vector<char> vec3(4); // 4-element length char vector
    vector<char> vec4(vec3); // 4-element length char vector from vec3
    vector<char> vec5(6,'d'); // 6-element vector of 'd's
    vector<vector<int>> subs1; // its size is zero
    vector<vector<int>> subs2 = {}; // its size is zero
    vector<vector<int>> subs3 = {{}}; // its size is one as it vector contains one empty vector
    return 0;
}