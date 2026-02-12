#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotateArrayByOne(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return;
        }
        
        int t = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i - 1] = nums[i];
        }
        nums[nums.size() - 1] = t;
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
    sol.rotateArrayByOne(vec);

    for (auto v : vec)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}