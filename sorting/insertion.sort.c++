#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> insertionSort(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            int cur = nums[i], pre = i - 1;

            while (pre >= 0 && nums[pre] > cur)
            {
                nums[pre + 1] = nums[pre];
                pre--;
            }
            nums[pre + 1] = cur;
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
    vector<int> sort = sol.insertionSort(vec);

    for (auto v : sort)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}