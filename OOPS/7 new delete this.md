## this
- local object pointer contains address of caller obj.
- cannot be modified.

```cpp
class A
{
    int a;
    A(int x)
    {
        this->a = x;
    }
};
```

## new
- dynamically allocated memory.
- cannot be modified.

## delete
- delete the memory which allocated dynamically.
- It delete the memory not the pointer.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int a;
    Complex(int x)
    {
        this->a = x;
    }
};
int main()
{
    Complex *p = new Complex(2);
    cout<<p->a;
    delete p;

    cout<<p;  // 20xd51730
    return 0;
}
```cpp


