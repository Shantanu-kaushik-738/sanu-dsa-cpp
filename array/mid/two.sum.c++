#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int first = nums[i];
            int second = target - first;

            if (m.find(second) != m.end())
            {
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[first] = i;
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

    int x;
    cin >> x;

    Solution sol;
    vector<int> ans = sol.twoSum(vec, x);

    for (auto v : ans)
    {
        cout << v << " ";
    }

    return 0;
}