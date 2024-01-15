## Method Overloading

- Early Binding. (Compile Time polymorphism)
- provides multiple definitions of the function.
- two or more functions can have the same name but different parameters.
- “Function” name should be the same and the arguments should be different.
- Function overloading is unaffected by a function's return type.

```cpp
#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    return (a + b);
}

string add(string a, string b)
{
    return (a + b);
}

int add(int a, int b, int c)
{
    return (a + b + c);
}

double add(double a, double b)
{
    return (a + b);
}

int main()
{
    cout << add(10, 2) << endl;
    cout << add(5.3, 6.4) << endl;
    cout << add("45", "12") << endl;

    return 0;
}
```
