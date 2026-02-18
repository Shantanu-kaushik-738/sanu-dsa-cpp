#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int freq = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (freq == 0)
            {
                ans = nums[i];
            }
            if (nums[i] == ans)
            {
                freq++;
            }
            else
            {
                freq--;
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
    cout << sol.majorityElement(vec) << endl;

    return 0;
}