#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // properties
    string name;
    string department;
    string subject;

    Teacher()
    { // non-parameterized constructor
        cout << "constructor" << endl;
        department = "computer science";
        cout << endl;
    }

    Teacher(string name, string department, string subject, double salary)
    { // parameterized constructor
        this->name = name;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
    }

    Teacher(Teacher x)
    { // copy constructor (pass by value)
        this->name = x.name;
        this->department = x.department;
        this->subject = x.subject;
        this->salary = x.salary;
    }

    Teacher(Teacher &y)
    { // copy constructor (pass by refrence)
        this->name = y.name;
        this->department = y.department;
        this->subject = y.subject;
        this->salary = y.salary;
    }

    // method   /   member function
    void changedept(string newdept)
    {
        department = newdept;
    }

    void setSalary(double s)
    { // setter
        salary = s;
    }

    double getSalary()
    { // getter
        return salary;
    }
    
    void getinfo()
    {
        cout << name << endl;
        cout << department << endl;
        cout << subject << endl;
        cout << salary << endl;
    }
};

int main()
{
    Teacher t1; // non-parameterized constructor called (auto)

    t1.name = "rahul";
    t1.subject = "cpp";
    t1.setSalary(546.42);

    cout << t1.name << endl;
    cout << t1.department << endl;
    cout << t1.subject << endl;
    cout << t1.getSalary() << endl;

    cout << endl;

    Teacher t2("babblu", "cse", "c++", 140.18); // parameterized constructor
    t2.getinfo();

    cout << endl;

    Teacher t3(t2); 
    t3.getinfo();

    return 0;
}
