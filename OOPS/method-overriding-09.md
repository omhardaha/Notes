## Method Overriding

- redefinition of base class function in its derived class.
- (return type and parameters) should be same.
- Late Binding. (Run Time polymorphism)

```cpp
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
```

### Other Concept
- Base class pointer can point any of derieved class obj.