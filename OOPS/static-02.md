### Static Local Varriable
- Only Initialize Once.
- Default Value is 0
- Doesn't Destroy After Fucntion Call.
- Can be accessed through class name if member is public.

```cpp
#include <bits/stdc++.h>
using namespace std;

void addStudent(int id, string name)
{
    static int totalStudent;
    totalStudent++;
    cout << totalStudent << endl;
}

int main()
{
    addStudent(14, "Jane"); // 1
    addStudent(5, "Holland"); // 2
    return 0;
}
```

### Static Member Varriable
- Initialize Once means not belong to Object It Belongs to Class.
- Declared Inside the Class.
- Defined Outside the Class.
- Also Called Class Member Varriable.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Account
{
    static float interest_rate;
    int balance;

public:
    void setBalance(int x)
    {
        balance = x;
    }

    void showProfit()
    {
        cout << balance * (interest_rate / 100);
    }
};

float Account ::interest_rate = 5;

int main()
{
    Account a1;
    a1.setBalance(1000);
    a1.showProfit();

    return 0;
}
```
### Static Member Functions 
- Only Access Static Member Varriables.
- Also Called Class Member Functions.
- It can called without creating obj.

```cpp
#include <bits/stdc++.h>
using namespace std;
class Account
{
    static float interest_rate;
    int balance;

public:
    void setBalance(int x)
    {
        balance = x;
    }
    static void setInterest(float x)
    {
        interest_rate = x;
    }
};

float Account ::interest_rate = 5;

int main()
{
    Account ::setInterest(5.5);
    return 0;
};
```