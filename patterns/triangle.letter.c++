#include <iostream>
using namespace std;

void triangle_letter(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
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

    triangle_letter(r);

    return 0;
}