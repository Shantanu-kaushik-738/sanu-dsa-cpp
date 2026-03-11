#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    { // non-parameterized constructor
        cout << "parent constructor" << endl;
    }

    Person(string name, int age)
    { // parameterized constructor
        this->name = name;
        this->age = age;
    }
};

class Teacher
{
public:
    string subject;
    double salary;
};

class trainer : public Person
{ // hierarchial inheritance
public:
    string traningsub;
};

class assistent : public Person
{ // hierarchial inheritance
public:
    string university;
};

class TA : public Person, public Teacher
{ // multiple  inheritence
public:
    TA()
    { // non-parameterized constructor
        cout << "TA constructor" << endl;
    }

    void getinfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << subject << endl;
        cout << salary << endl;
    }
};

class Student : public Person
{ // single  inheritence
public:
    int rollno;

    Student()
    { // non-parameterized constructor
        cout << "child constructor" << endl;
    }

    Student(string name, int age, int rollno) : Person(name, age)
    { // parameterized constructor
        this->rollno = rollno;
    }

    void getinfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << rollno << endl;
    }
};

class Gradstudent : public Student
{ // multi-level inheritence
public:
    string researcharea;

    Gradstudent()
    { // non-parameterized constructor
        cout << "Gradstudent constructor" << endl;
    }

    void getinfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << rollno << endl;
        cout << researcharea << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "lucky";
    s1.age = 21;
    s1.rollno = 12345;
    s1.getinfo();

    Student s2("chotuu", 24, 4567);
    s2.getinfo();

    Gradstudent gs1;
    gs1.name = "neha";
    gs1.age = 22;
    gs1.rollno = 1345;
    gs1.researcharea = "physics";
    gs1.getinfo();

    TA t1;
    t1.name = "golu";
    t1.age = 23;
    t1.subject = "python";
    t1.salary = 123.45;
    t1.getinfo();

    return 0;
}