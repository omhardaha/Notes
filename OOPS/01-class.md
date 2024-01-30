`Class` - it is a blueprint or template for creating objects.

`Object`- An object is an instance of a class.

- By Default Everthing is Private.
- A State(Member) of Class must be changed only using member function.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b; // Instance Member Of Class Complex

public:
    void setData(int x, int y);// Instance Member Func Of Class Complex

    void showData()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.setData(a + c.a, b + c.b);
        return temp;
    }
};

void Complex ::setData(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c1.showData();
    c2.showData();
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}
```
