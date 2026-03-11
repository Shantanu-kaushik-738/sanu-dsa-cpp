#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    double *cgpaptr;

    student(string name, double cgpa)
    { // constructor
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    student(student &x)
    { // constructor
        this->name = x.name;
        cgpaptr = new double;
        *cgpaptr = *x.cgpaptr; // deep copy
    }
    
    void getinfo()
    {
        cout << name << endl;
        cout << *cgpaptr << endl;
    }
};

int main()
{
    student s1("aman", 8.4);

    student s2(s1);
    *(s2.cgpaptr) = 9.43; // shallow pointer
    s1.getinfo();

    s2.name = "kalam";
    s2.getinfo();

    return 0;
}