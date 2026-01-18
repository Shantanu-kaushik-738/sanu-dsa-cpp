#include <iostream>
using namespace std;

class solution
{
public:
    int count_digit(int n)
    {
        int count = 0;

        while (n != 0)
        {
            n /= 10;
            count++;
        }
        return count;
    }
};

int main()
{
    int n;
    cin >> n;

    solution sol;

    cout << sol.count_digit(n);

    return 0;
}