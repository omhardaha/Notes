# Inheritance
- Inheriting Properties and behaviours of existing class into new.

## Access Specifiers

### 1. Public
Members declared as public are accessible from outside the class.

### 2. Private
Members declared as private cannot be accessed (or viewed) from outside the class.

### 3. Protected
Members declared as protected cannot be accessed from outside the class; however, they can be accessed in inherited classes.


```cpp
    class A : private B{}             //private derivation    
    class A : public B{}              //public derivation    
    class A : protected B{}           //protected derivation    
    class A: B{}            //private derivation by default 
```
- By Default its a private;


## Types of Inheritance in C++

### 1. Single Inheritance

```cpp
class Base {};
class Derived : public Base {};
```

## Multiple Inheritance

Multiple inheritance is a feature in object-oriented programming (OOP) where a class can inherit properties and behaviors from more than one base class. In C++, a derived class can have multiple parent classes, and it inherits members from all of them.

```cpp
class Base1 {};
class Base2 {};
class Derived : public Base1, public Base2 {};
```

## Hybrid Inheritance

Hybrid inheritance is a combination of two or more types of inheritance within a single program. It often involves a mix of multiple and multilevel inheritance.

```cpp
class Base {};
class Derived1 : public Base {};
class Derived2 : public Base {};
class FinalDerived : public Derived1, public Derived2 {};
```
                     Base
                  /       \
             Derived1     Derived2  
                   \     /
                 FinalDerived     

## Hierarchical Inheritance

Hierarchical inheritance involves a single base class that is inherited by multiple derived classes.

```cpp
class Base {};
class Derived1 : public Base {};
class Derived2 : public Base {};
```
                     Base
                  /       \
             Derived1     Derived2

## Multilevel Inheritance

Multilevel inheritance involves a chain of inheritance, where a class is derived from another class, and then another class is derived from that class.

```cpp
class Base {};
class Intermediate : public Base {};
class Derived : public Intermediate {};
```

## Constructor

- If there is a parametrized Constructor in Class a we need to call explicitely.
- Other Constructor of A call its default Constructor implicitely no need to mention.

```cpp
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a;
    A(int x)
    {
        a = x;
    }
};

class B : public A
{
public:
    int b;
    B(int x, int y) : A(y)
    {
        b = y;
    }
};

int main()
{
    B d(3, 5);
    cout << d.b;
    return 0;
}
```