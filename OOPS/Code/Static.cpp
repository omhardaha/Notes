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