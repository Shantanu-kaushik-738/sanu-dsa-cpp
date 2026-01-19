#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void n_to_one(int n)
    {
        if (n == 0)
        { // base case
            return;
        }
        cout << n << endl;
        n_to_one(n - 1);
    }
};

int main()
{
    int n;
    cin >> n;

    solution sol;
    sol.n_to_one(n);

    return 0;
}