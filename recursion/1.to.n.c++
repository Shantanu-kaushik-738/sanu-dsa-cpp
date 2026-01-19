#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void one_to_n(int current, int n)
    {
        if (current > n)
        { // base case
            return;
        }

        cout << current << endl;
        one_to_n(current + 1, n);
    }
};

int main()
{
    int n;
    cin >> n;

    solution sol;
    sol.one_to_n(1, n);

    return 0;
}