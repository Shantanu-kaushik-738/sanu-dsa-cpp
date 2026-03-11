#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;

    Student()
    { // non-parameterized constructor
        cout << "non-parameterized constructor" << endl;
    }

    Student(string name)
    { // parameterized constructor
        this->name = name;
        cout << "parameterized constructor " << endl;
    }

    void show(int x)
    { // function overloading
        cout << x << endl;
    }
    void show(char ch)
    { // function overloading
        cout << ch << endl;
    }

    virtual void hello()
    { // virtual function
        cout << "hello from parent" << endl;
    }

    void getinfo()
    { // function overriding
        cout << "parent class" << endl;
    }
};

class Child : public Student
{
public:
    void getinfo()
    { // function overriding
        cout << "child class" << endl;
    }

    void hello()
    { // virtual function
        cout << "hello from child" << endl;
    }
};

int main()
{
    // compile-time polymorphism

    // constructor overloading
    Student s1;
    Student s2("tony");

    // function overloading
    s1.show(48);
    s2.show('$');

    // run-time polymorphism

    // function overriding
    Child c1;
    s1.getinfo();
    c1.getinfo();

    // virtual function
    s1.hello();
    c1.hello();

    return 0;
}