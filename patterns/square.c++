#include <iostream>
using namespace std;

void square(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
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

    square(r);
    return 0;
}