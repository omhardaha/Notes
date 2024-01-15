#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func1() { cout << "func1 Called from A" << endl; }
    virtual void func2() { cout << "func2 Called from A" << endl; }
    virtual void func3() { cout << "func3 Called from A" << endl; }
    virtual void func4() { cout << "func4 Called from A" << endl; }
};

class B : public A
{
public:
    void func1() { cout << "func1 Called from B" << endl; }
    void func2() { cout << "func2 Called from B" << endl; }
    void func4(int x) { cout << "func4 Called from B" << endl; }
};

int main()
{
    A *p;  // pointer of base class.
    B obj; // object of derrived class.

    p = &obj; // base class pointer pointing derrived class object.

    // LB = Late Binding
    // EB = Early Binding
    p->func1(); // A (EB) In EB We Consider the Type of pointer.
    p->func2(); // B (LB) In LB We Consider the Data Of Pointer.
    p->func3(); // B (LB) In EB We Consider the Data of pointer but here func3 not exist so we use the vtable.

    p->func4(); // B (LB) In EB We Consider the type of pointer but here func4() not exist because of arg in func4(int) in derrived class so it also check in vtable.

    // p->func4(4); // this will show error because if declare a virtual function in base all the derrived class function of same will be virtual and their params shoudld be same

    return 0;
}