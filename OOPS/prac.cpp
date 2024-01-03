#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee
{
    virtual void askForPromotion() = 0; // pure virtual function or abstract function
};

class Employee : AbstractEmployee
{
private:
    string company;
    int age;

protected:
    string name;

public:
    // default constructor
    Employee()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter company: ";
        getline(cin, company);
        cout << "Enter age: ";
        cin >> age;
    }

    // parameterized constructor
    // this is a keyword that stores in it the address of the object of which the method is called
    Employee(string name, string company, int age)
    {
        this->name = name;
        this->company = company;
        this->age = age;
    }

    void introduceYouself()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Company: " << company << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    void setCompany(string company)
    {
        this->company = company;
    }

    string getCompany()
    {
        return company;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return age;
    }

    void askForPromotion()

    {
        if (age > 30)
        {
            cout << name << " got promoted!" << endl;
        }
        else
        {
            cout << name << ", sorry no promotion for you!!" << endl;
        }
    }

    virtual void work()
    {
        cout << name << " is checking email, task backlog, performing those tasks...." << endl;
    }
};

class Developer : public Employee
{
public:
    string favProgrammingLanguage;

    // constructr of base class will be taking care of the first three properties
    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
    {
        this->favProgrammingLanguage = favProgrammingLanguage;
    }

    void fixBug()
    {
        cout << getName() << " fixed bug using " << favProgrammingLanguage << endl;
        cout << name << " fixed bug using " << favProgrammingLanguage << endl; // made name protected
    }

    void work()
    {
        cout << name << " is writing " << favProgrammingLanguage << " code." << endl;
    }
};

class Teacher : public Employee
{
public:
    string subject;

    void prepareLesson()
    {
        cout << name << " is preparing " << subject << " lesson." << endl;
    }

    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        this->subject = subject;
    }

    void work()
    {
        cout << name << " is teaching " << subject << " lesson." << endl;
    }
};

int main()
{
    // Employee emp1;
    //  cout << endl;
    //  emp1.introduceYouself();

    // std::cout << std::endl;

    // Employee emp1("Saldina", "Code Beauty", 25);
    // Employee emp2("John Doe", "Barclays", 32);
    // emp2.introduceYouself();

    std::cout << std::endl;

    // emp1.askForPromotion();
    // emp2.askForPromotion();
    // emp2.setAge(39);
    // cout << emp2.getName() << " is " << emp2.getAge() << " years old." << endl;

    Developer d = Developer("Saldina", "Code Beauty", 25, "C++");
    // d.fixBug();
    // d.askForPromotion();

    Teacher t = Teacher("Jack", "Don Bosco", 35, "History");
    // t.prepareLesson();
    // t.askForPromotion();

    // d.work();
    // t.work();

    Employee *e1 = &d; // pointer of base class holding the reference of the dervied class object
    Employee *e2 = &t;

    e1->work();
    e2->work();
    // to make the above two calls work for developer and teacher, we need to make the work function in the Employee class virtual

    std::cout << std::endl;
    return 0;
}

// encapsulated data are accessed through methods of the class widely known as: setters and getters.
// abstraction is showcasing the essential features and hiding the background details.
// inheritance is simply the functionality of child class to inherit the properties or features if its parent's class
// polymorphism means different forms. One name different signatures
// the most common use of polymorphism is when a parent clss reference is used to refer to a child class object