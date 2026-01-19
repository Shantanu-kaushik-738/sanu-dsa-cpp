#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int sum_of_n(int n)
    {
        if (n == 0)
        { // base case
            return 0;
        }
        return n + sum_of_n(n - 1);
    }
};

int main()
{
    int n;
    cin >> n;

    solution sol;
    cout << sol.sum_of_n(n) << endl;

    return 0;
}