#include <iostream>
using namespace std;

void upper_pyr(int r)
{
    for (int i = r; i > 0; i--)
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

    upper_pyr(r);

    return 0;
}