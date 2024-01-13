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