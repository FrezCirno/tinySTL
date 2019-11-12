// #include <bits/stl_set.h>
// #include <set>
#include <iostream>
#include "set.hpp"
using namespace std;

#include "mem_test.h"

template <typename Tree>
void print(const Tree &tree)
{
    for (auto it = tree.begin(); it != tree.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    mem_test a(123, "hello");
    mem_test b(1234, "hhh");
    mem_test c(12345, "oooo");
    cout << endl;
    tinySTL::set<mem_test, str_comp> s;
    s.insert(a);
    print(s);
    s.insert(b);
    print(s);
    s.insert(c);
    print(s);

    s.erase(s.find(a));
    print(s);
    cout<<"\nreturn\n";
    return 0;
}