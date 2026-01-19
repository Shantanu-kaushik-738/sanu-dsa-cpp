#include <iostream>
using namespace std;

void alpha_ramp(int r)
{
    for (int i = 0; i < r; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    int r;
    cin >> r;

    alpha_ramp(r);

    return 0;
}