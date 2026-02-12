#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> selectionSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int si = i;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] < nums[si])
                {
                    si = j;
                }
            }
            swap(nums[i], nums[si]);
        }
        return nums;
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
    vector<int> sort = sol.selectionSort(vec);

    for (auto v : sort)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}