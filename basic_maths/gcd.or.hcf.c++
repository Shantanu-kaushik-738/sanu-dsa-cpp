#include <iostream>
using namespace std;

// brute force approach O(1)
// class solution
// {
// public:
//     int GCD_HCF(int a, int b)
//     {
//         int gcd;

//         for (int i = 1; i <= min(a, b); i++)
//         {
//             if (a % i == 0 && b % i == 0)
//             {
//                 gcd = i;
//             }
//         }
//         return gcd;
//     }
// };

class solution
{
public: // optimal approach O(1)
    int GCD_HCF(int a, int b)
    {
        while (a > 0 && b > 0)
        {
            if (a > b)
            {
                a %= b;
            }
            else
            {
                b %= a;
            }
        }
        if (a == 0)
        {
            return b;
        }
        return a;
    }
};

int main()
{
    int a, b;
    cin >> a >> b;

    solution sol;
    cout << sol.GCD_HCF(a, b) << endl;

    return 0;
}