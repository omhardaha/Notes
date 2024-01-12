#include <bits/stdc++.h>
using namespace std;

// Complie Time Polymorphysm / Static Polymorphysm / Method Overloading / Early Binding
// same name but TYPES , ARGUMENTS , RETURN TYPE , ORDERING can be Different.

class CompileTime
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    void sum(int a, int b, string d)
    {
        cout << a + b;
    }
    int sum(double a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b;
    }
    double sum(double a, double b, double c)
    {
        return a + b;
    }
};

int main()
{

    return 0;
}