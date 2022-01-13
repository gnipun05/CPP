#include <iostream>
#include <list> // remember to add it when declaring a pointer of STL---> list
using namespace std;

struct MyHash
{
    int bucket;
    list <int> *table; /*table is a pointer of data type list. List is a class
      in c++ which is used to implement DOUBLY LINKED LIST in c++. */

/* list data type is a list of Linked Lists */

    MyHash(int b)
    {
        bucket=b;
        table=new list<int>[b];
    }

    void insert(int key)
    {
        int i=key%bucket;
        table[i].push_back(key);
    }

    bool search(int key)
    {
        int i=key%bucket;
        for(auto element : table[i])
            if(element == key)
                return true;
        return false;
    }

    void remove(int key)
    {
        int i=key%bucket;
        table[i].remove(key);
    }
};

int main ()
{
    return 0;
}