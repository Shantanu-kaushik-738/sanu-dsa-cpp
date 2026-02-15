#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &arr)
    {
        int st = 0, end = arr.size() - 1;
        int ans = INT_MAX;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (arr[st] <= arr[end])
            {
                ans = min(ans, arr[st]);
                break;
            }

            if (arr[st] <= arr[mid])
            {
                ans = min(ans, arr[st]);
                st = mid + 1;
            }
            else
            {
                ans = min(ans, arr[mid]);
                end = mid - 1;
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
    cout << sol.findMin(vec);

    return 0;
}