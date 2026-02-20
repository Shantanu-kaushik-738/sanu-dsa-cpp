#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leaders(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        int maxi = INT_MIN;

        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > maxi)
            {
                ans.push_back(nums[i]);
            }
            maxi = max(maxi, nums[i]);
        }
        sort(ans.begin(), ans.end());

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

    Solution sol;
    vector<int> ans = sol.leaders(vec);

    for (auto v : ans)
    {
        cout << v << " ";
    }
    return 0;
}