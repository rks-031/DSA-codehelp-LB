#include <bits/stdc++.h>
using namespace std;

// hierarchical inheritance

class A
{
public:
        void func1()
        {
                cout << "Inside function 1" << endl;
        }
};

class B : public A
{
public:
        void func2()
        {
                cout << "Inside function 2" << endl;
        }
};

class C : public A
{
public:
        void func3()
        {
                cout << "Inside function 3" << endl;
        }
};

int main()
{
        A a;
        a.func1();
        B b;
        b.func1();
        b.func2();
        C c;
        c.func1();
        c.func3();
}