#include <iostream>
using namespace std;

void hollow_rectengle(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == r || j == c)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int r, c;
    cin >> r >> c;

    hollow_rectengle(r, c);
    
    return 0;
}