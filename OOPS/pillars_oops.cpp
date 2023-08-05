#include <bits/stdc++.h>
using namespace std;

class human
{

public:
        int ht;
        int wt;
        int age;

        int getAge()
        {
                return this->age;
        }
        int setWeight(int w)
        {
                this->wt = w;
        }
};

class male : public human
{
public:
        string color;

        void sleep()
        {
                cout << "Male Sleeping" << endl;
        }
};

int main()
{
        male obj1;
        cout << obj1.age << endl;
        cout << obj1.wt << endl;
        cout << obj1.ht << endl;
        cout << obj1.color << endl;
        obj1.sleep();
}