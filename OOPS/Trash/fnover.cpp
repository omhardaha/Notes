#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func() { cout << "Called from A"; }
};

class B : public A
{
public:
    void func() { cout << "Called from B"; }
};

int main()
{
    B obj;
    obj.func(); // B

    // Other way of calling
    obj.A::func(); // A
    return 0;
}