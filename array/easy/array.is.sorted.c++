#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSorted(vector<int> &nums)
    {
        for (int i = 0; i < 4; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                return false;
            }
        }
        return true;
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
    cout << sol.isSorted(vec);

    return 0;
}