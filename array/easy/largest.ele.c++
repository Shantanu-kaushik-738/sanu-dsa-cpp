#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestElement(vector<int> &nums)
    {
        int min = nums[0];

        for (int v : nums)
        {
            if (v > min)
            {
                min = v;
            }
        }
        return min;
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
    cout << sol.largestElement(vec) << endl;

    return 0;
}