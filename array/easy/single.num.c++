#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int xr = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            xr ^= nums[i];
        }
        return xr;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    Solution sol;
    cout << sol.singleNumber(vec);

    return 0;
}