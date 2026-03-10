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
};

int main()
{
    Teacher t1; // object

    t1.name = "sanu";
    t1.department = "computer science";
    t1.subject = "cpp";
    t1.setSalary(786.42);

    cout << t1.name << endl;
    cout << t1.department << endl;
    cout << t1.subject << endl;
    cout << t1.getSalary() << endl;

    return 0;
}