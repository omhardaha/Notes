#include <bits/stdc++.h>
using namespace std;

// RunTime Polymorphysm / Dynamic Polymorphysm / Method Overriding / Late Binding.
// When the method signature (name and parameters) are the same in the superclass and the child class, it’s called overriding.

class Super
{
public:
    Super()
    {
    }
    void print()
    {
        cout << "I m Super Class" << endl;
    }
};

class Child1 : public Super
{
public:
    void print()
    {
        cout << "I m Child1 Class" << endl;
    }
};

int main()
{
    // Super s = Super();
    // s.print();

    // Child1 c = Child1();
    // c.print();

    Super s1 = Child1();
    s1.print();

    return 0;
}