#include <iostream>
using namespace std;

class solution
{
public:
    int reverse_number(int n)
    {
        int reverse = 0;

        while (n != 0)
        {
            int d = n % 10;
            reverse = reverse * 10 + d;
            n /= 10;
        }
        return reverse;
    }
};

int main()
{
    int n;
    cin >> n;

    solution sol;

    cout << sol.reverse_number(n);

    return 0;
}