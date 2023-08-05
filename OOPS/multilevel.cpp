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

class germanShepherd : public Dog
{
};

int main()
{
        germanShepherd g1;
        g1.speak();
}