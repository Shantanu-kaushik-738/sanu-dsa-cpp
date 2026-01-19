#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print_name(string ch, int n)
    {
        if (n == 0)
        { // base case
            return;
        }
        cout << ch << endl;
        print_name(ch, n - 1);
    }
};

int main()
{
    int n;
    string ch;
    cin >> n >> ch;

    solution sol;
    sol.print_name(ch, n);

    return 0;
}