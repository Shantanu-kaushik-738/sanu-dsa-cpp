#include <iostream>
using namespace std;

class solution
{
public:
    bool armstrong(int n)
    {
        int original = n;
        int temp = 0;

        while (n != 0)
        {
            int d = n % 10;
            temp += (d * d * d);
            n /= 10;
        }
        
        if (temp == original)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    int n;
    cin >> n;

    solution sol;
    cout << sol.armstrong(n) << endl;

    return 0;
}