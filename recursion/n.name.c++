#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printName(string name, int count, int N)
    {

        if (count == N)
        { // Base case
            return;
        }

        cout << name << endl;

        printName(name, count + 1, N);
    }
};

int main()
{
    int n;
    cin >> n;

    string ch;
    cin >> ch;

    Solution sol;
    sol.printName(ch, 0, n);

    return 0;
}
