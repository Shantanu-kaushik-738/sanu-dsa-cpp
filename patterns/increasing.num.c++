#include <iostream>
using namespace std;

void increasing_num(int r)
{
    int n = 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
}

int main()
{
    int r;
    cin >> r;

    increasing_num(r);

    return 0;
}