#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lowerBound(vector<int> &nums, int x)
    {
        if (nums.size() == 1)
        {
            return 0;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= x)
            {
                return i;
            }
        }
        return nums.size();
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

    int x;
    cin >> x;

    Solution sol;
    cout << sol.lowerBound(vec, x);

    return 0;
}