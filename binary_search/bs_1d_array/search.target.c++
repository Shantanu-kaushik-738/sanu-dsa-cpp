#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int x)
    {
        int n = nums.size();
        int st = 0;
        int end = n - 1;

        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (nums[mid] == x)
            {
                return mid;
            }

            if (nums[mid] > x)
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return -1;
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

    int target;
    cin >> target;

    Solution sol;
    cout << sol.search(vec, target);

    return 0;
}