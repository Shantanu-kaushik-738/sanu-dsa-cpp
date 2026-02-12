#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bubbleSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = 0; j < nums.size() - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                }
            }
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
    vector<int> sort = sol.bubbleSort(vec);

    for (auto v : sort)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}