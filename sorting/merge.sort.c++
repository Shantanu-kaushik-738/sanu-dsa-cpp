#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> merge(vector<int> &nums, int st, int mid, int end)
    {
        vector<int> temp;
        int i = st, j = mid + 1;

        while (i <= mid && j <= end)
        {
            if (nums[i] <= nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid)
        {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= end)
        {
            temp.push_back(nums[j]);
            j++;
        }

        for (int k = 0; k < temp.size(); k++)
        {
            nums[k + st] = temp[k];
        }
        return temp;
    }

    vector<int> mergeSort(vector<int> &nums, int st, int end)
    {
        int mid = st + (end - st) / 2;
        if (st < end)
        {

            mergeSort(nums, st, mid);      // left half
            mergeSort(nums, mid + 1, end); // right half

            // merge(nums, st, mid, end);
        }
        return merge(nums, st, mid, end);
    }
};

int main()
{
    int n;
    cin >> n;

    int st = 0;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    Solution sol;
    vector<int> sort = sol.mergeSort(vec, st, n);

    for (auto v : sort)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}