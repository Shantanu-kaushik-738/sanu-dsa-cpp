#include <iostream>
using namespace std;

void half_dimond(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = r - 1; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
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

    half_dimond(r);

    return 0;
}