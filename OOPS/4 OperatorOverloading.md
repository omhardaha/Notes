## Operator Overloading
- When an Operator is overloaded with multiple jobs.
- Compile-time polymorphism.
- Anh Valid Operator can used as function name.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int x, int y) { a = x, b = y; }
    void showData() { cout << "a=" << a << " b=" << b << endl; }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.setData(a + c.a, b + c.b);
        return temp;
    }
    void operator-() // negetion of 
    {
        a=-a;
        b=-b;
    }
    Complex operator++() //increment
    {
        Complex c;
        c.a = ++a;
        c.b = ++b;
        return c;
    }
    Complex operator++(int) // post increment
    {
        Complex c;
        c.a = a++;
        c.b = b++;
        return c;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1 + c2;   // c3 = c1.operator+(c2);    
    c3.showData();
    -c3;            // c3.operator-();
    c3.showData();

    Complex c4;
    c4.setData(7,7);
    ++c4;
    c4.showData();
    c4++;
    c4.showData();
    return 0;
}
```