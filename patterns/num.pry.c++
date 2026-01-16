#include <iostream>
using namespace std;

void num_prymid(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int r;
    cin >> r;

    num_prymid(r);
    return 0;
}