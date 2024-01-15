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