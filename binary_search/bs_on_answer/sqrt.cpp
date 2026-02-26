#include <iostream>
using namespace std;

class Solution
{
public:
    int floorSqrt(int n)
    {

        int st = 1;
        int end = n / 2;

        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (mid * mid <= n)
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return end;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution sol;

    cout << sol.floorSqrt(n);

    return 0;
}