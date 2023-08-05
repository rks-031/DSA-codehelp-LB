#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
        int health;
        // char name[20];
public:
        char level;
        char *name;
        static int time; // static variable

        // default constructor
        Hero()
        {
                cout << "Default Constructor called" << endl;
                name = new char[100];
        }

        // Parameterized constructor
        Hero(int health, char level)
        {
                this->health = health;
                this->level = level;
        }

        // Copy Constructor
        Hero(Hero &temp)
        {
                // cout << "copy constructor called" << endl;
                char *ch = new char[strlen(temp.name) + 1];
                strcpy(ch, temp.name);
                this->name = ch;
                this->health = temp.health;
                this->level = temp.level;
        }

        void print()
        {
                cout << "name = " << this->name << endl;
                cout << "health = " << this->health << endl;
                cout << "level = " << this->level << endl;
        }

        // getter and setter functions

        int getHealth()
        {
                return health;
        }

        void setHealth(int h)
        {
                health = h;
        }

        char getLevel()
        {
                return level;
        }

        void setLevel(char l)
        {
                level = l;
        }

        void setName(char name[])
        {
                strcpy(this->name, name);
        }

        // static functions can only access static data members
        static int random()
        {
                // cout << this->health << endl; //error
                return time; // works well
        }

        ~Hero()
        {
                cout << "Destructor called" << endl;
        }
};

int Hero::time = 5;

int main()
{

        cout << Hero::time << endl;
        cout << Hero::random() << endl;

        // Hero hero1;
        // hero1.setHealth(12);
        // hero1.setLevel('D');
        // char name[7] = "Babbar";
        // hero1.setName(name);
        // hero1.print();
        // cout << endl;
        // // use default copy constructor: it does shallow copy
        // // shallow copy: same memory is acccessed using 2 names
        // Hero hero2;
        // hero2 = hero1;
        // hero2.print();
        // cout << endl;

        // hero1.name[0] = 'G';
        // hero1.print(); // prints Gabbar
        // cout << endl;

        // hero2.print(); // also prints Gabbar b'coz of shallow copy
        // cout << endl;

        // using our own defined copy constructor helps us in deep copy
        // in deep copy new memeory of same size is created

        // Hero h2(70, 'C');
        // h2.print();

        // // Hero h3(h2); or
        // Hero h3 = h2; // copy constructor
        // h3.print();

        // // creation of object

        // // static allocation
        // Hero h(99, 'A');

        // // h.setHealth(90);
        // cout << h.getHealth() << endl;
        // cout << h.getLevel() << endl;
        // // h.setLevel('A');

        // // // dynamic allocation
        // // Hero *h1 = new Hero;
        // // h1->setHealth(70);
        // // cout << h1->getHealth() << endl;
        // // h1->setLevel('B');
        // // cout << h1->getLevel() << endl;
        // // cout << (*h1).getHealth() << endl;
        // // cout << (*h1).getLevel() << endl;
}
