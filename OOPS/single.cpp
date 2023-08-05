#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
        int age;
        int wt;

        void speak()
        {
                cout << "Speaking" << endl;
        }
};

class Dog : public Animal
{
};

int main()
{
        Dog d1;
        d1.age = 25;
        d1.wt = 400;
        cout << d1.age << " " << d1.wt << endl;
}