#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func() { cout << "Called from A"<<endl; }
};

class B : public A
{
public:
    void func() { cout << "Called from B"<<endl; }
};

int main()
{
    B obj;
    obj.func(); // B

    // Other way of calling
    obj.A::func(); // A

    A *p;
    p = &obj;
    p->func(); //A

    return 0;
}