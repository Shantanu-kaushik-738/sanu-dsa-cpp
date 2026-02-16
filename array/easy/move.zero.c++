#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                temp.push_back(nums[i]);
            }
        }
        for (int i = 0; i < temp.size(); i++)
        {
            nums[i] = temp[i];
        }
        for (int i = temp.size(); i < n; i++)
        {
            nums[i] = 0;
        }
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
    sol.moveZeroes(vec);

    for (auto v : vec)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}