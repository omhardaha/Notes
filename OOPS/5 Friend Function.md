## Friend Function
- Can Access Private Varriables Of Class;
- Not a member function.
- Declared Inside the Class.
- Defined Outside the Class.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a = 1,b = 2;
    friend void sum(Complex);
};

void sum(Complex c)
{
    cout << "sum is = " << c.a + c.b; // 3
};

int main()
{
    Complex a;
    sum(a);
    return 0;
}
```
### It Can Become Friend to more than one class.
```cpp
#include <bits/stdc++.h>
using namespace std;
class A;
class B; // Forward Declarations
class A
{
    int a = 10;
    friend void sum(A,B);
};
class B
{
    int b = 20;
    friend void sum(A,B);
};
void sum(A a,B b)
{
    cout << "sum is = " << a.a + b.b; // 30
};
int main()
{
    A a;
    B b;
    sum(a,b);
    return 0;
}
```
### Operator Overloading Using Friend Function.
- Need One More Operator here to use friend fuunction
```cpp
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a = 1, b = 4;

public:
    void setData(int x, int y) { a = x, b = y; }
    void showData() { cout << "a=" << a << " b=" << b << endl; }

    friend Complex operator+(Complex X, Complex Y);
};
Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.setData(X.a + Y.a, X.b + Y.b);
    return temp;
}

int main()
{
    Complex c1, c2, c3;
    c1.setData(5, 7);
    c2.setData(2, 6);
    c3 = c1 + c2; // c3 = c1.operator+(c2);
    c3.showData(); // 7 13
    return 0;
}
```
### Member Function Of One Class Can Become a Friend of Another Class.
```cpp
#include <iostream>
using namespace std;

class B; // Forward declaration

class A
{
public:
    void friendFunction(B obj); // Declaration of friend function
};

class B
{
private:
    int privateData;

public:
    B(int data) : privateData(data) {}
    friend void A::friendFunction(B obj); // Declaration of friend function from A
};

void A::friendFunction(B obj)
{
    cout << "The friend function of A can access privateData: " << obj.privateData << endl;
}

int main()
{
    B obj(42);
    A fc;
    fc.friendFunction(obj);
    return 0;
}
```