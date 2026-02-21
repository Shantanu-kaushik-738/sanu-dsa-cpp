#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int st = 0;
        int end = nums.size() - 1;
        while (st < end)
        {
            int mid = (end + st) / 2;
            if (mid % 2 == 1)
            {
                mid--;
            }
            if (nums[mid] == nums[mid + 1])
            {
                st = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        return nums[st];
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
    cout << sol.singleNonDuplicate(vec);

    return 0;
}