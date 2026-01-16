#include <iostream>
using namespace std;

void inverted_num_pyr(int r)
{
    for (int i = r; i > 0; i--)
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

    inverted_num_pyr(r);

    return 0;
}