#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;

    person()
    { // non-parameterized constructor
        cout << "parent constructor" << endl;
    }

    person(string name, int age)
    { // parameterized constructor
        this->name = name;
        this->age = age;
    }
};

class teacher
{
public:
    string subject;
    double salary;
};

class trainer : public person
{ // hierarchial inheritance
public:
    string traningsub;
};

class assistent : public person
{ // hierarchial inheritance
public:
    string university;
};

class TA : public person, public teacher
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

class student : public person
{ // single  inheritence
public:
    int rollno;

    student()
    { // non-parameterized constructor
        cout << "child constructor" << endl;
    }

    student(string name, int age, int rollno) : person(name, age)
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

class gradstudent : public student
{ // multi-level inheritence
public:
    string researcharea;

    gradstudent()
    { // non-parameterized constructor
        cout << "gradstudent constructor" << endl;
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
    student s1;
    s1.name = "lucky";
    s1.age = 21;
    s1.rollno = 12345;
    s1.getinfo();

    student s2("chotuu", 24, 4567);
    s2.getinfo();

    gradstudent gs1;
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