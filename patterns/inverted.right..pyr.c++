#include <iostream>
using namespace std;

void inverted_right_pyr(int r)
{
    for (int i = r; i > 0; i--)
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

    inverted_right_pyr(r);

    return 0;
}