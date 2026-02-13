#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int x)
    {
        int st = 0;
        int end = nums.size() - 1;
        int ans = nums.size();

        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (nums[mid] >= x)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return ans;
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
    cout << sol.searchInsert(vec, target);

    return 0;
}