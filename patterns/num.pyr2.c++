#include <iostream>
using namespace std;

void num_pyrmid(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int r;
    cin >> r;

    num_pyrmid(r);
    return 0;
}