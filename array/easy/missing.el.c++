#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int s1 = n * (n + 1) / 2;
        int s2 = 0;

        for (int i = 0; i < n; i++)
        {
            s2 += nums[i];
        }
        return s1 - s2;
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
    cout << sol.missingNumber(vec) << endl;

    return 0;
}