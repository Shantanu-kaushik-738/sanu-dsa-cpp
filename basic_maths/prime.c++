#include <iostream>
using namespace std;

class solution
{
public:
    bool check_prime(int n)
    {
        if (n <= 1)       // - Check till √n only
            return false; // Because if n = a * b,
        if (n <= 3)       // then one factor ≤ √n.- Skip even numbers
            return true;  // After checking 2,

        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (int i = 5; i * i <= n; i += 6) // no need to check 4, 6, 8… - 6k ± 1 rule All primes > 3 are of the form 6k ± 1.
        {
            if (n % i == 0 || n % (i + 2) == 0) // That’s why we increment by 6 and check i and i + 2.
                return false;
        }
        return true;
    }
};

// bool check_prime(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

int main()
{
    int n;
    cin >> n;

    solution sol;
    cout << sol.check_prime(n);

    return 0;
}