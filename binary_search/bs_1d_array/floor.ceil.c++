#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x)
    {
        int n = nums.size();
        int f = -1, c = -1;
        int st = 0, end = n - 1;

        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (nums[mid] <= x)
            {
                f = nums[mid];
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        st = 0, end = n - 1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (nums[mid] >= x)
            {
                c = nums[mid];
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return {f, c};
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
    vector<int> vc = sol.getFloorAndCeil(vec, x);

    for (auto v : vc)
    {
        cout << v << " ";
    }

    return 0;
}