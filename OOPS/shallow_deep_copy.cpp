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
    student s1("sanu", 7.3);

    student s2(s1);
    *(s2.cgpaptr) = 7.83; // shallow pointer
    s1.getinfo();

    s2.name = "sanuu";
    s2.getinfo();

    return 0;
}