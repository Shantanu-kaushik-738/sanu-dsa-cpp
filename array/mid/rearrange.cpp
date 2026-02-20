#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        int pos = 0, neg = 1;

        vector<int> ans(n, 0);

        for (int i = 0; i < n; i++)
        {
            if (nums[i] < 0)
            {
                ans[neg] = nums[i];
                neg += 2;
            }
            else
            {
                ans[pos] = nums[i];
                pos += 2;
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

    Solution sol;
    vector<int>ans = sol.rearrangeArray(vec);

    for (auto v : ans)
    {
        cout << v << " ";
    }
    return 0;
}