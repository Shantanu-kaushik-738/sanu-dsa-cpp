#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int fectorial_of_n(int n)
    {
        if (n == 0)
        { // base case
            return 1;
        }
        return n * fectorial_of_n(n - 1);
    }
};

int main()
{
    int n;
    cin >> n;

    solution sol;
    cout << sol.fectorial_of_n(n) << endl;

    return 0;
}