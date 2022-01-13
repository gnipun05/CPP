/* Unordered Map is used to store key value pairs. 
Maps are based on Red Black Tree and stores keys in odered form, but
Unordered Maps are based on Hashing and store keys in unordered form */

/* Unordered Map is an Unordered container with fast search, insert and delete operations {O(1) on Average} 
whereas, Maps are slower with an Average time of O(logn)*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map <string, int> m; // key is a string and value is an integer
    m["abc"]=20;
    m["efg"]=30;
    m.insert({"xyz", 15}); 
    // these will form an unordered map m --> ({"abc",20},{"efg",30},{"xyz",15});

    

    for(auto x : m)
        cout << x.first << ' ' << x.second << endl; // printing will be unordered

    for(auto it = m.begin(); it!=m.end(); it++)
        cout << it->first << " " << it->second << endl;

    

    if(m.find("efg")!=m.end()) // or --> auto it = m.find("efg"); if(it!=m.end()) cout <<"Found";
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    if(m.count("efg"))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;


    cout << m.size() << endl; // prints the number of key value pairs in m 

    m.erase("efg"); // removes efg key and its corresponding value from the m
    m.erase(m.begin()); // iterators can also be passed in erase()
    m.erase(m.begin(), m.end()); // clears the full unordered set

    return 0;
}