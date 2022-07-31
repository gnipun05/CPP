/* Unordered Set doesn't take duplicate values. If we add a duplicate in it, the size of Unordered set will
 remain the same as previous (although no error is displayed on adding a duplicate) */

/* This program deals with operations on unordered set, which includes:
- insert()
- begin()
- end()
- size()
- empty()
- clear()
- find()
- count()
- erase() {erase(val) & erase(iterator)}
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(23);
    s.insert(15);
    s.insert(12);
    for(int x:s)
        cout << x << " "; // Elements will print in any Random Order (Permutation of 10,23,15,12)
    
    cout << endl;
    for(auto it = s.begin(); it!=s.end(); it++)
        cout << *it << " "; // Elements will print in any Random Order (Permutation of 10,23,15,12)
    cout << endl;

    cout << s.size() << endl; // prints 4

    // s.clear();
    // cout << s.size() << " "; // prints 0
    // cout << s.empty() << " "; // prints 1 if s unordered set is empty


    if(s.find(15)==s.end()) // s.find(15 returns the index of 15)
        cout << "Not Found"  << endl;
    else 
        cout << "Found" <<" " << *s.find(15) << endl; // cout << *(s.find(15)) will give us 15

    if(s.count(15)) // s.count(15) returns 1 if 15 is present, else false
        cout << "Found" <<" " << *s.find(15) << endl;
    else
        cout << "Not Found" << endl;

    
    s.erase(15); // Now, s.size() will give 3
    
    unordered_set<int>::iterator it = s.find(10);
    s.erase(it); // Now, s.size() will give 2

    s.erase(s.begin(), s.end()); // works as s.clear(); s.size() will give 0

    return 0;
}