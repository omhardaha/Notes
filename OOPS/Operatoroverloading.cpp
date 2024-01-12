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