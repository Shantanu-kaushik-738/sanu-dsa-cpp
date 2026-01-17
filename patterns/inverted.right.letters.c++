#include <iostream>
using namespace std;

void inverted_right_letter(int r)
{
    for (int i = r-1; i >= 0; i--)
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

    inverted_right_letter(r);

    return 0;
}