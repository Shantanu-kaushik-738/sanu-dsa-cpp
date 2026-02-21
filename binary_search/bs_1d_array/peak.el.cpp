#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        int st = 0, end = n - 1;

        while (st < end)
        {
            int mid = st + (end - st) / 2;

            if (nums[mid] < nums[mid + 1])
            {
                st = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return st;
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
    cout << sol.findPeakElement(vec);

    return 0;
}