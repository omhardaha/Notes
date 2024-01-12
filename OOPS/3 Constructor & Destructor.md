### Constructor
- Name same as Class Name.
- No Return Type.
- Its a Instance Member Function so can not be static.
- Automatically Called after creation of obj.
- It Solved the problem of Initialization.

### Types

#### 1. Default Constructor
- If No Constructor has been declared compiler declare it implicitely.

#### 2. Parameterized Constructor
- For Initialization Purpose

#### 3. Copy Constructor
- It is implicitely exist if we do not declared any Copy Constructor.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){}; // Default Constructor

    Complex(int x, int y) // Parameterized Constructor
    {
        a = x, b = y;
    }
    Complex(int x) // Parameterized Constructor
    {
        a = x;
    }

    Complex(Complex &c) // Copy Constructor
    {
        a = c.a;
        b = c.b;
    }

    void showData()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
};
int main()
{
    Complex c1; // Calling Default Constructor
    Complex c2(3,4); // Calling Parameterized Constructor
    Complex c3(c2); // Calling Copy Constructor

    // Other Way Of Calling Constructor
    Complex c4 = c3; // Calling Copy Constructor
    Complex c5 = 2; // Calling Parameterized Constructor 2
    c3.showData();
    return 0;
}
```


### Destructor
- Name same as Class Name with '~' at starting.
- Used For release of a resources.
- Ex. Pointers.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
    
public:
    ~Complex() // Destructor
    {
        cout << "Destructor Called" << endl;
    };
};
void run()
{
    Complex c1;
}
int main()
{
    run();
    return 0;
}
```