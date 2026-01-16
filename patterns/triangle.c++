#include <iostream>
using namespace std;

void triangle(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int r;
    cin >> r;

    triangle(r);
    
    return 0;
}