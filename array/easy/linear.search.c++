#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int linearSearch(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
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
    cout << sol.linearSearch(vec, target);

    return 0;
}