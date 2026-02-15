#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int k)
    {
        int st = 0, end = nums.size() - 1;

        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (nums[mid] == k)
            {
                return mid;
            }
            // left sort
            if (nums[st] <= nums[mid])
            {
                if (nums[st] <= k && nums[mid] > k)
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else
            { // right sort
                if (nums[mid] <= k && nums[end] > k)
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid - 1;
                }
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