#include <iostream>

using namespace std;

class A
{
public:
        void func1()
        {
                cout << "Inside function 1" << endl;
        }
};

class B : virtual public A
{
public:
        void func2()
        {
                cout << "Inside function 2" << endl;
        }
};

class C : virtual public A
{
public:
        void func3()
        {
                cout << "Inside function 3" << endl;
        }
};

class D : public B, public C
{
};

int main()
{
        D objD;

        // Accessing functions from class A
        objD.func1(); // Output: Inside function 1

        // Accessing functions from class B
        objD.func2(); // Output: Inside function 2

        // Accessing functions from class C
        objD.func3(); // Output: Inside function 3

        return 0;
}
