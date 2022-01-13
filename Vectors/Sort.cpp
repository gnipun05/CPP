// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector <int> v;
//     v.push_back(3);
//     v.push_back(7);
//     v.push_back(1);

//     sort(v.begin(),v.end()); // also see the cpp program -> Reduce_the_Array(ApnaClg)

//     for(auto element:v)
//         cout << element << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> v = { 1, 7, 8 , 3, 1, 10, 3, 3, 7 };
  
//     vector<int>::iterator ip;
  
//     partial_sort(v.begin(), v.begin() + 3, v.end()); // places smallest 3 numbers of vector in the front
  
//     for (ip = v.begin(); ip != v.end(); ++ip) {
//         cout << *ip << " ";
//     }
  
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
  
// Defining the BinaryFunction
bool comp(int a, int b){
    return (a < b);
}
  
int main(){
    vector<int> v = { 1, 3, 1, 10, 3, 3, 7, 7, 8 };
  
    vector<int>::iterator ip;
  
    partial_sort(v.begin(), v.begin() + 3, v.end(), comp);  // we can have a binary function call in our sorting arg for sorting vector in a specific manner

    for (ip = v.begin(); ip != v.end(); ++ip) {
        cout << *ip << " ";
    }

    return 0;
}