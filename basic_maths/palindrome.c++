#include <iostream>
using namespace std;

class solution
{
public:
    bool palindrome_number(int n)
    {
        int original = n;
        int reverse = 0;

        while (n != 0)
        {
            int d = n % 10;
            reverse = reverse * 10 + d;
            n /= 10;
        }
        if (reverse == original)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    solution sol;

    cout << sol.palindrome_number(n);

    return 0;
}