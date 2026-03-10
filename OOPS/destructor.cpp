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

    ~student()
    { // destructor //ye pointer obj ke memory ko delete kr deta hai automatically
        cout << "destructor" << endl;
        delete cgpaptr;
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
    s1.getinfo();

    return 0;
}