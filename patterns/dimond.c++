#include <iostream>
using namespace std;

void dimond(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r - i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = r - 1; i > 0; i--)
    {
        for (int j = 1; j <= r - i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
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

    dimond(r);

    return 0;
}