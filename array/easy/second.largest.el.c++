#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {
        int l = nums[0];
        int sl = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > l)
            {
                sl = l;
                l = nums[i];
            }
            else if (nums[i] < l && nums[i] > sl)
            {
                sl = nums[i];
            }
        }
        return sl;
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
    cout << sol.secondLargestElement(vec) << endl;

    return 0;
}