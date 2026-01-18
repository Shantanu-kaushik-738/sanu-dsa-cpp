#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class solution
{
public:
    vector<int> get_divisors(int n)
    {
        vector<int> div;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                div.push_back(i);
            }
        }
        return div;
    }
};

int main()
{
    int n;
    cin >> n;

    solution sol;
    vector<int> vec = sol.get_divisors(n);

    for (int v : vec)
    {
        cout << v << " ";
    }

    return 0;
}